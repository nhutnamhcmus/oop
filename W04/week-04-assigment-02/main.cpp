#include <iostream>
#include "Line.h"

int main() {
    Point a(1, 2);
    Point b(2, 3);
    Line *line = new Line(new Point(1, 2), new Point(2, 3));
    std::cout << line->getStart().getX() << "\n";
    std::cout << line->getLength() << "\n";
    std::cout << a.calculateDistanceTo(b) << " \n";
    return 0;
}
