//
// Created by sakur on 9/6/2020.
//

#include "Line.h"

Line::~Line() = default;

Line::Line(const Point &start, const Point &end) {
    this->start = start;
    this->end = end;
    this->length = this->start.calculateDistanceTo(end);
}

Line::Line(const Line &another) {
    *this = another;
}

Line &Line::operator=(const Line &another) {
    this->setStart(another.getStart());
    this->setEnd(another.getEnd());
    this->setLength(another.getLength());
    return *this;
}

const Point &Line::getStart() const {
    return start;
}

void Line::setStart(const Point &start) {
    Line::start = start;
}

const Point &Line::getEnd() const {
    return end;
}

void Line::setEnd(const Point &End) {
    end = End;
}

double Line::getLength() const {
    return length;
}

void Line::setLength(double length) {
    Line::length = length;
}

Line::Line(const Point *start, const Point *end) : start(*start), end(*end){
    this->length = this->start.calculateDistanceTo(this->end);
}

Line::Line() = default;



