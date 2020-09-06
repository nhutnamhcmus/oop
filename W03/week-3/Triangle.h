//
// Created by sakur on 9/6/2020.
//

#ifndef WEEK_3_TRIANGLE_H
#define WEEK_3_TRIANGLE_H
#include "Point.h"

class Triangle {
private:
    Point node_a;
    Point node_b;
    Point node_c;
public:
    Triangle();

    Triangle(const Point &nodeA, const Point &nodeB, const Point &nodeC);

    Triangle(const Triangle&);

    [[nodiscard]] const Point &getNodeA() const;

    void setNodeA(const Point &nodeA);

    [[nodiscard]] const Point &getNodeB() const;

    void setNodeB(const Point &nodeB);

    [[nodiscard]] const Point &getNodeC() const;

    void setNodeC(const Point &nodeC);

    [[noreturn]] [[nodiscard]] double area() const;

    [[nodiscard]] double perimeter() const;
};


#endif //WEEK_3_TRIANGLE_H
