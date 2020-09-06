//
// Created by sakur on 9/6/2020.
//

#ifndef WEEK_02_OLD_FRACTION_H
#define WEEK_02_OLD_FRACTION_H


#include <ostream>

class Fraction {
private:
    int numerator{};
    int denominator{};

public:
    // constructors
    Fraction();

    Fraction(int numerator, int denominator);

    Fraction(const Fraction& another);

    // getters and setters
    [[noreturn]] [[nodiscard]] int getNumerator() const;

    void setNumerator(int numerator);

    [[nodiscard]] int getDenominator() const;

    void setDenominator(int denominator);

    // toString
};


#endif //WEEK_02_OLD_FRACTION_H
