//
// Created by sakur on 9/6/2020.
//

#ifndef WEEK_4_LINE_H
#define WEEK_4_LINE_H
#include "Point.h"

class Line {
private:
    Point start;
    Point end;
    double length;
public:
    static int instanceCount;
public:
    Line();
    Line(const Point&, const Point&);
    Line(Point *, Point *);
    ~Line();

    [[nodiscard]] const Point &getStart() const;

    void setStart(const Point &start);

    [[nodiscard]] const Point &getAnEnd() const;

    void setAnEnd(const Point &anEnd);

    [[nodiscard]] double getLength() const;

    void setLength(double length);
};


#endif //WEEK_4_LINE_H
