//
// Created by sakur on 9/6/2020.
//

#include "Fraction.h"

Fraction::Fraction() = default;

Fraction::Fraction(int numerator, int denominator) : numerator(numerator), denominator(denominator) {}

int Fraction::getNumerator() const {
    return numerator;
}

void Fraction::setNumerator(int numerator) {
    Fraction::numerator = numerator;
}

int Fraction::getDenominator() const {
    return denominator;
}

void Fraction::setDenominator(int denominator) {
    Fraction::denominator = denominator;
}
