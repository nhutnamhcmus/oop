//
// Created by sakur on 9/6/2020.
//

#ifndef WEEK_2_CIRCLE_H
#define WEEK_2_CIRCLE_H
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
};


#endif //WEEK_2_CIRCLE_H
