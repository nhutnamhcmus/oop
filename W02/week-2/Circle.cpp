//
// Created by sakur on 9/6/2020.
//

#include "Circle.h"

Circle::Circle(const Point &center, double radius) : center(center), radius(radius) {}

const Point &Circle::getCenter() const {
    return center;
}

void Circle::setCenter(const Point &center) {
    Circle::center = center;
}

double Circle::getRadius() const {
    return radius;
}

void Circle::setRadius(double radius) {
    Circle::radius = radius;
}
