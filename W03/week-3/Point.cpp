//
// Created by sakur on 9/6/2020.
//

#include "Point.h"

Point::Point(double x, double y) : x(x), y(y) {}

Point::Point() : x(0), y(0) {}

double Point::getX() const {
    return x;
}

void Point::setX(double x) {
    Point::x = x;
}

double Point::getY() const {
    return y;
}

void Point::setY(double y) {
    Point::y = y;
}

double Point::calculateDistanceTo(const Point &another) const {
    return sqrt(pow(Point::getX() - another.getX(), 2) - pow(Point::getY() - another.getY(), 2));
}

Point::~Point() = default;
