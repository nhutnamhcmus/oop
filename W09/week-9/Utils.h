//
// Created by sakur on 9/15/2020.
//

#ifndef WEEK_9_UTILS_H
#define WEEK_9_UTILS_H

class Utils {
public:
    static unsigned GCD(unsigned a, unsigned b) {
        return (b != 0) ? GCD(b, a % b) : a;
    }
};

#endif //WEEK_9_UTILS_H
