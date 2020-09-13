//
// Created by sakur on 9/6/2020.
//

#ifndef WEEK_4_RECTANGLE_H
#define WEEK_4_RECTANGLE_H

#include "Point.h"

class Rectangle {
private:
    Point topLeft;
    Point bottomRight;

public:
    static int instanceCount;

public:
    Rectangle(const Point &topLeft, const Point &bottomRight);

    Rectangle();

    [[nodiscard]] const Point &getTopLeft() const;

    void setTopLeft(const Point &topLeft);

    [[nodiscard]] const Point &getBottomRight() const;

    void setBottomRight(const Point &bottomRight);

    [[nodiscard]] double area() const;

    [[nodiscard]] double perimeter() const;
};


#endif //WEEK_4_RECTANGLE_H
