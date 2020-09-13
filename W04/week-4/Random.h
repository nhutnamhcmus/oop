//
// Created by sakur on 9/6/2020.
//

#ifndef WEEK_4_RANDOM_H
#define WEEK_4_RANDOM_H


class Random {
public:
    Random();

    static int generate();

    static int generate(int a, int b);

    int Next();

    int Next(int max);
};


#endif //WEEK_4_RANDOM_H
