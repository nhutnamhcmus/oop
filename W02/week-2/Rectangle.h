//
// Created by sakur on 9/6/2020.
//

#ifndef WEEK_2_RECTANGLE_H
#define WEEK_2_RECTANGLE_H
#include "Point.h"

class Rectangle {
private:
    Point topLeft;
    Point bottomRight;

public:
    Rectangle(const Point &topLeft, const Point &bottomRight);

    [[nodiscard]] const Point &getTopLeft() const;

    void setTopLeft(const Point &topLeft);

    [[nodiscard]] const Point &getBottomRight() const;

    void setBottomRight(const Point &bottomRight);
};


#endif //WEEK_2_RECTANGLE_H
