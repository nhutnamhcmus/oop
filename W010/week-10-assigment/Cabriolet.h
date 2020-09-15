//
// Created by sakur on 9/15/2020.
//

#ifndef WEEK_10_ASSIGMENT_CABRIOLET_H
#define WEEK_10_ASSIGMENT_CABRIOLET_H

#include "Car.h"

class Cabriolet : public Car {
public:
    void StartEngine() override {
        std::cout << "Roof removed." << "\n";
        Car::StartEngine();
    }

    ~Cabriolet() {
        std::cout << "Cabriolet is deleted." << "\n";
    }
};

#endif //WEEK_10_ASSIGMENT_CABRIOLET_H
