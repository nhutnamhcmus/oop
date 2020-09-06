//
// Created by sakur on 9/6/2020.
//

#ifndef WEEK_2_FRACTION_H
#define WEEK_2_FRACTION_H


class Fraction {
private:
    int numerator{};
    int denominator{};

public:
    // constructors
    Fraction();

    Fraction(int numerator, int denominator);

    // getters and setters
    [[nodiscard]] int getNumerator() const;

    void setNumerator(int numerator);

    [[nodiscard]] int getDenominator() const;

    void setDenominator(int denominator);
};


#endif //WEEK_2_FRACTION_H
