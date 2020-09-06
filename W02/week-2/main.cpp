#include <iostream>
#include "Point.h"

int main() {
    Point point(1, 3);
    std::cout << point.getX() << " " << point.getY() << std::endl;
    return 0;
}
