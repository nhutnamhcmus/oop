#include <iostream>
#include "Cabriolet.h"

int main() {

    Vehicle * car = new Cabriolet();
    car->StartEngine();

    delete car;
    return 0;
}
