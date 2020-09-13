//
// Created by sakur on 9/6/2020.
//

#include "Point.h"

Point::Point(const float &x, const float &y) : _x(x), _y(y) {}

Point::Point() = default;

Point::Point(const Point &another) {
    *this = another;
}

Point::~Point() = default;

Point &Point::operator=(const Point &another) {
    this->setX(another.getX());
    this->setY(another.getY());
}

float Point::getX() const {
    return _x;
}

void Point::setX(float x) {
    _x = x;
}

float Point::getY() const {
    return _y;
}

void Point::setY(float y) {
    _y = y;
}
