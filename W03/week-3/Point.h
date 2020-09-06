//
// Created by sakur on 9/6/2020.
//

#ifndef WEEK_3_POINT_H
#define WEEK_3_POINT_H
#include <math.h>

class Point {
private:
    double x{};
    double y{};
public:
    // constructors
    Point(double x, double y);

    Point();

    ~Point();
    // getters and setters
    [[nodiscard]] double getX() const;

    void setX(double x);

    [[nodiscard]] double getY() const;

    void setY(double y);

    [[nodiscard]] double calculateDistanceTo(const Point &another) const;
};


#endif //WEEK_3_POINT_H
