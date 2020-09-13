//
// Created by sakur on 9/6/2020.
//

#include "Dice.h"
#include <random>
#include <chrono>

int Dice::Roll() {
    std::random_device rd;
    std::mt19937::result_type seed = rd() ^ (
            (std::mt19937::result_type)
                    std::chrono::duration_cast<std::chrono::seconds>(
                            std::chrono::system_clock::now().time_since_epoch()
                    ).count() +
            (std::mt19937::result_type)
                    std::chrono::duration_cast<std::chrono::microseconds>(
                            std::chrono::high_resolution_clock::now().time_since_epoch()
                    ).count() );

    std::mt19937 gen(seed);
    std::uniform_int_distribution<unsigned> distrib(1, 6);
    this->_rollCount = -~(this->_rollCount);
    return int(distrib(gen));
}

Dice::Dice() {
    this->_rollCount = 0;
}
