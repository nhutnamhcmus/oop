#include <iostream>
#include "Line.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Line *line = new Line(new Point(1, 2), new Point(3, 4));
    Line *l = new Line(Point(1, 2), Point(3, 4));
    return 0;
}
