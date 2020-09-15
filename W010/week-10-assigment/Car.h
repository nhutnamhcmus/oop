//
// Created by sakur on 9/15/2020.
//

#ifndef WEEK_10_ASSIGMENT_CAR_H
#define WEEK_10_ASSIGMENT_CAR_H

#include <iostream>
#include "Vehicle.h"

class Car : public Vehicle{
public:
    void StartEngine() override {
        std::cout << "Engine started." << "\n";
    }

    ~Car() {
        std::cout << "Car is deleted." << "\n";
    }
};

#endif //WEEK_10_ASSIGMENT_CAR_H
