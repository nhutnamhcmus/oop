//
// Created by sakur on 9/6/2020.
//

#ifndef WEEK_04_ASSIGMENT_02_LINE_H
#define WEEK_04_ASSIGMENT_02_LINE_H
#include "Point.h"

class Line {
public:
    static int instanceCount;

private:
    Point start{0,0};
    Point end{0, 0};
    double length;

public:
    Line(const Point&, const Point&);
    Line(const Point*, const Point*);
    Line(const Line&);
    Line();

    ~Line();

    [[nodiscard]] const Point &getStart() const;

    void setStart(const Point &start);

    [[nodiscard]] const Point &getEnd() const;

    void setEnd(const Point &anEnd);

    [[nodiscard]] double getLength() const;

    void setLength(double length);

    Line& operator=(const Line&);
};


#endif //WEEK_04_ASSIGMENT_02_LINE_H
