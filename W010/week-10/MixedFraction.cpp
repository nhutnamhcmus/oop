//
// Created by sakur on 9/15/2020.
//

#include "MixedFraction.h"
#include <iostream>

MixedFraction::MixedFraction() : Fraction() {}

MixedFraction::MixedFraction(const int &numerator, const int &denominator) : Fraction(numerator, denominator) {
    std::cout << "MixedFraction constructor." << "\n";
}

std::string MixedFraction::toString() {
    return (this->getNumerator() > this->getDenominator())
    ? std::string (std::to_string(this->getNumerator() / this->getDenominator())
    + MixedFraction::space
    + std::to_string(this->getNumerator() % this->getDenominator())
    + MixedFraction::separator
    + std::to_string(this->getDenominator())
    )
    : std::string(std::to_string(this->getNumerator())
    + MixedFraction::separator
    + std::to_string(this->getDenominator())
    );
}

MixedFraction::~MixedFraction() {
    std::cout << "MixedFraction destructor." << "\n";
}

