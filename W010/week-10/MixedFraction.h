//
// Created by sakur on 9/15/2020.
//

#ifndef WEEK_10_MIXEDFRACTION_H
#define WEEK_10_MIXEDFRACTION_H
#include "Fraction.h"

class MixedFraction : public Fraction {
public:
    MixedFraction();

    MixedFraction(const int&numerator, const int&denominator);

    std::string toString();

    ~MixedFraction();
};


#endif //WEEK_10_MIXEDFRACTION_H
