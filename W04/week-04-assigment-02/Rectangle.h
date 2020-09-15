//
// Created by sakur on 9/6/2020.
//

#ifndef WEEK_04_ASSIGMENT_02_RECTANGLE_H
#define WEEK_04_ASSIGMENT_02_RECTANGLE_H
#include "Point.h"

class Rectangle {
public:
    static int instanceCount;

private:
    Point topLeft;
    Point bottomRight;

public:
    Rectangle(const Point &topLeft, const Point &bottomRight);

    Rectangle();

    Rectangle(const Rectangle&);

    [[nodiscard]] const Point &getTopLeft() const;

    void setTopLeft(const Point &topLeft);

    [[nodiscard]] const Point &getBottomRight() const;

    void setBottomRight(const Point &bottomRight);

    [[nodiscard]] double area() const;

    [[nodiscard]] double perimeter() const;

    Rectangle& operator=(const Rectangle&);
};


#endif //WEEK_04_ASSIGMENT_02_RECTANGLE_H
