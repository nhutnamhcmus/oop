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
    double length{};
public:
    static int instanceCount;
public:
    Line();
    Line(const Point&, const Point&);
    Line(Point *, Point *);
    Line(const Line&);
    ~Line();

    [[nodiscard]] const Point &getStart() const;

    void setStart(const Point &start);

    [[nodiscard]] const Point &getEnd() const;

    void setEnd(const Point &End);

    [[nodiscard]] double getLength() const;

    void setLength(double length);

    Line& operator=(const Line&);
};


#endif //WEEK_4_LINE_H
