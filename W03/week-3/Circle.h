//
// Created by sakur on 9/6/2020.
//

#ifndef WEEK_3_CIRCLE_H
#define WEEK_3_CIRCLE_H

#include <cmath>
#include "Point.h"

class Circle {
private:
    Point center;
    double radius;
public:
    Circle(const Point &center, double radius);

    [[nodiscard]] const Point &getCenter() const;

    void setCenter(const Point &center);

    [[nodiscard]] double getRadius() const;

    void setRadius(double radius);

    [[nodiscard]] double area() const;

    [[nodiscard]] double perimeter() const;

    [[nodiscard]] double diameter() const;
};


#endif //WEEK_3_CIRCLE_H
