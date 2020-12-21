#include "Fraction.h"

Fraction::Fraction(int numerator, int denominator) {
    this->numerator = numerator;
    this->denominator = denominator;
}

Fraction::Fraction(const Fraction &fr) {
    this->numerator = fr.numerator;
    this->denominator = fr.denominator;
}

int find_nod(int numerator, int denominator) {
    if (numerator < 0)
        return 1;
    while (numerator != 0 && denominator != 0) {
        if (numerator > denominator) {
            numerator %= denominator;
        } else {
            denominator %= numerator;
        }
    }
    return numerator + denominator;
}

Fraction Fraction::normalize() {
    int nod = find_nod(this->numerator, this->denominator);
    if (nod != 1) {
        this->numerator = this->numerator / nod;
        this->denominator = this->denominator / nod;
    }
    return *this;
}

std::string Fraction::getValue() {
    normalize();
    if (this->denominator != 1) {
        return std::to_string(this->numerator) + '/' + std::to_string(this->denominator);
    } else {
        return std::to_string(this->numerator);
    }
}

int Fraction::getNumerator() const {
    return this->numerator;
}

int Fraction::getDenominator() const {
    return this->denominator;
}

Fraction Fraction::operator+(const Fraction &fr) {
    Fraction
            rez = Fraction(numerator * fr.denominator + fr.numerator * denominator,
                           denominator * fr.denominator).normalize();
    return rez;
}

Fraction Fraction::operator-(const Fraction &fr) {
    Fraction
            rez = Fraction(numerator * fr.denominator - fr.numerator * denominator,
                           denominator * fr.denominator).normalize();
    return rez;
}

Fraction Fraction::operator*(const Fraction &fr) {
    Fraction rez = Fraction(numerator * fr.numerator,
                            denominator * fr.denominator).normalize();
    return rez;
}

Fraction Fraction::operator/(const Fraction &fr) {
    Fraction rez = Fraction(numerator * fr.denominator,
                            fr.numerator * denominator).normalize();
    return rez;
}

Fraction& Fraction::operator=(const Fraction &fr) {
    numerator = fr.numerator;
    denominator = fr.denominator;
    return *this;
}