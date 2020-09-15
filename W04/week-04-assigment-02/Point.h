//
// Created by sakur on 9/6/2020.
//

#ifndef WEEK_04_ASSIGMENT_02_POINT_H
#define WEEK_04_ASSIGMENT_02_POINT_H


class Point {
public:

    static int instanceCount;
private:
    double _x;
    double _y;

public:
    // getters and setters method
    [[nodiscard]] double getX() const;

    void setX(double x);

    [[nodiscard]] double getY() const;

    void setY(double y);

    // constructor
    Point(const double &x, const double &y);
    Point();
    Point(const Point&);

    // destructor
    ~Point();

    // overloading assigment operator
    Point& operator=(const Point&);

    // class activities
    [[nodiscard]] double calculateDistanceTo(const Point &another) const;

    // static method
    [[nodiscard]] static double calculateDistance(const Point&, const Point&);
};


#endif //WEEK_04_ASSIGMENT_02_POINT_H
