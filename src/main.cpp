#include <iostream>
#include "Fraction.h"

int main() {
    Fraction fr1(1, 6);
    Fraction fr2(1, 2);
    Fraction fr3;
    fr3 = fr1 + fr2;
    printf("%s + %s = %s\n", fr1.getValue().c_str(), fr2.getValue().c_str(), fr3.getValue().c_str());
    Fraction fr4(1, 2);
    Fraction fr5(4, 9);
    Fraction fr6;
    fr6 = fr4 - fr5;
    printf("%s - %s = %s\n", fr4.getValue().c_str(), fr5.getValue().c_str(), fr6.getValue().c_str());
    Fraction fr7(1, 3);
    Fraction fr8(4, 5);
    Fraction fr9;
    fr9 = fr7 * fr8;
    printf("%s * %s = %s\n", fr7.getValue().c_str(), fr8.getValue().c_str(), fr9.getValue().c_str());
    Fraction fr10(1, 5);
    Fraction fr11(1, 8);
    Fraction fr12;
    fr12 = fr10 / fr11;
    printf("%s / %s = %s", fr10.getValue().c_str(), fr11.getValue().c_str(), fr12.getValue().c_str());
    return 0;
}