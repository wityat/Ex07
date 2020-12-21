#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#include <string>

class Fraction {
public:
    explicit Fraction(int numerator = 0,
                      int denominator = 1);
    Fraction(const Fraction &new_fr);

    std::string getValue();
    int getNumerator() const;
    int getDenominator() const;

    Fraction operator+(const Fraction &);
    Fraction operator-(const Fraction &);
    Fraction operator*(const Fraction &);
    Fraction operator/(const Fraction &);
    Fraction& operator=(const Fraction &);
private:
    int numerator, denominator;
    Fraction normalize();
};

#endif  // INCLUDE_FRACTION_H_