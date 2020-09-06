#include <iostream>
#include "Point.h"
int main() {
    auto *point = new Point(1, 3);
    std::cout << point->getX() << " " << point->getY() << std::endl;
    return 0;
}
