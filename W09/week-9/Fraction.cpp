//
// Created by sakur on 9/15/2020.
//

#include "Fraction.h"
#include <iostream>

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

Fraction::Fraction() : numerator(0), denominator(1) {}

Fraction::Fraction(const int &numerator, const int &denominator) : numerator(numerator){
    if (denominator != 0) { this->setDenominator(denominator); } else { std::cerr << "Exception: Input denominator equal to zero"; }
}

Fraction::Fraction(const Fraction &another) {
    *this = another;
}

Fraction &Fraction::operator=(const Fraction &another) {
    this->setNumerator(another.getNumerator());
    this->setDenominator(another.getDenominator());
    return *this;
}

std::istream &operator>>(std::istream &is, Fraction &fraction) {
    int numerator, denominator;
    std::cout << "numerator: ";
    is >> numerator;
    std::cout << "denominator: ";
    is >> denominator;
    if (denominator != 0) {
        fraction.setNumerator(numerator);
        fraction.setDenominator(denominator);
        return is;
    }
    return is;
}

std::ostream &operator<<(std::ostream &os, const Fraction &fraction) {
    os << "numerator: " << fraction.numerator << " denominator: " << fraction.denominator;
    return os;
}
