//
// Created by sakur on 9/6/2020.
//

#ifndef WEEK_4_POINT_H
#define WEEK_4_POINT_H
#include <cmath>

class Point {
private:
    double x{};
    double y{};

public:
    static int instanceCount;

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

    [[nodiscard]] static double calculateDistance(const Point&, const Point&);
};


#endif //WEEK_4_POINT_H
