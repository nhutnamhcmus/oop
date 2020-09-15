//
// Created by sakur on 9/15/2020.
//

#ifndef WEEK_9_FRACTION_H
#define WEEK_9_FRACTION_H


#include <ostream>

class Fraction {
private:
    int numerator;
    int denominator{};

public:
    [[nodiscard]] int getNumerator() const;

    void setNumerator(int numerator);

    [[nodiscard]] int getDenominator() const;

    void setDenominator(int denominator);

    Fraction();

    Fraction(const int&, const int&);

    Fraction(const Fraction&);

    Fraction& operator=(const Fraction&);

    friend std::istream &operator>>(std::istream &is, Fraction &fraction);

    friend std::ostream &operator<<(std::ostream &os, const Fraction &fraction);

    Fraction& operator+(const Fraction&);

    Fraction& operator-(const Fraction&);

    Fraction& operator*(const Fraction&);

    Fraction& operator/(const Fraction&);

    Fraction& operator++();

    Fraction& operator++(int);

};


#endif //WEEK_9_FRACTION_H
