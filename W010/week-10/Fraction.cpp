//
// Created by sakur on 9/15/2020.
//

#include "Fraction.h"
#include <sstream>
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

Fraction::Fraction(const int &numerator, const int &denominator) : numerator(numerator), denominator(denominator) {
    std::cout << "Fraction constructor." << "\n";
}

Fraction::Fraction(const Fraction &another) {
    *this = another;
}

Fraction &Fraction::operator=(const Fraction &another) {
    this->setNumerator(another.getNumerator());
    this->setDenominator(another.getDenominator());
    return *this;
}

std::string Fraction::toString() const {
    std::stringstream writer;
    writer << this->getNumerator() << this->separator << this->getDenominator();
    return std::string(writer.str());
}

Fraction::~Fraction() {
    std::cout << "Fraction destructor." << "\n";
}

