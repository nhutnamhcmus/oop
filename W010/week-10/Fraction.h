//
// Created by sakur on 9/15/2020.
//

#ifndef WEEK_10_FRACTION_H
#define WEEK_10_FRACTION_H
#include <string>

class Fraction {

protected:
    const std::string space = " ";
    const std::string separator = "/";
    int numerator;
    int denominator;

public:
    [[nodiscard]] int getNumerator() const;

    void setNumerator(int numerator);

    [[nodiscard]] int getDenominator() const;

    void setDenominator(int denominator);

public:
    Fraction();

    Fraction(const int&, const int&);

    Fraction(const Fraction&);

    ~Fraction();

    Fraction& operator=(const Fraction&);

    [[nodiscard]] std::string toString() const;

};


#endif //WEEK_10_FRACTION_H
