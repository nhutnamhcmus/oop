//
// Created by sakur on 9/6/2020.
//

#include "Point.h"
#include <cmath>

Point::Point(const double &x, const double &y) : _x(x), _y(y) {}

Point::Point() = default;

Point::Point(const Point &another) {
    *this = another;
}

Point::~Point() = default;

Point &Point::operator=(const Point &another) {
    this->setX(another.getX());
    this->setY(another.getY());
    return *this;
}

double Point::getX() const {
    return _x;
}

void Point::setX(double x) {
    _x = x;
}

double Point::getY() const {
    return _y;
}

void Point::setY(double y) {
    _y = y;
}

double Point::calculateDistanceTo(const Point &another) const {
    return sqrt(pow(Point::getX() - another.getX(), 2) + pow(Point::getY() - another.getY(), 2));
}

double Point::calculateDistance(const Point &first_point, const Point &second_point) {
    return first_point.calculateDistanceTo(second_point);
}
