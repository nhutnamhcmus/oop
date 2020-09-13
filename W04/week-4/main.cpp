#include <iostream>
#include <random>
#include <chrono>
#include "Line.h"
#include "Dice.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Line *line = new Line(new Point(1, 2), new Point(3, 4));
    Line *l = new Line(Point(1, 2), Point(3, 4));
    std::cout << l->getStart().getX() << "\n";

    Dice *dice = new Dice();

    std::cout << dice->Roll() << "\n";

    std::cout << "Roll count: " << dice->_rollCount << "\n";

    return 0;
}
