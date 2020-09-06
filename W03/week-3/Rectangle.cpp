//
// Created by sakur on 9/6/2020.
//

#include "Rectangle.h"

Rectangle::Rectangle(const Point &topLeft, const Point &bottomRight) : topLeft(topLeft), bottomRight(bottomRight) {}

const Point &Rectangle::getTopLeft() const {
    return topLeft;
}

void Rectangle::setTopLeft(const Point &topLeft) {
    Rectangle::topLeft = topLeft;
}

const Point &Rectangle::getBottomRight() const {
    return bottomRight;
}

void Rectangle::setBottomRight(const Point &bottomRight) {
    Rectangle::bottomRight = bottomRight;
}

Rectangle::Rectangle() : topLeft(1, 1), bottomRight(10, 10) {}

double Rectangle::area() const {
    double height = this->getTopLeft().calculateDistanceTo(Point(this->getTopLeft().getX(), this->getBottomRight().getY()));
    double width = this->getBottomRight().calculateDistanceTo(Point(this->getTopLeft().getX(), this->getBottomRight().getY()));
    return height * width;
}

double Rectangle::perimeter() const {
    double height = this->getTopLeft().calculateDistanceTo(Point(this->getTopLeft().getX(), this->getBottomRight().getY()));
    double width = this->getBottomRight().calculateDistanceTo(Point(this->getTopLeft().getX(), this->getBottomRight().getY()));
    return 2 * (height + width);
}
