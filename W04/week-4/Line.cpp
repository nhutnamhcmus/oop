//
// Created by sakur on 9/6/2020.
//

#include "Line.h"

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

Line::Line(const Point &start, const Point &end) {
    this->start = start;
    this->end = end;
}

Line::Line() {

}

Line::Line(Point *start, Point *end) {
    this->start = *start;
    this->end = *end;
    this->length = this->start.calculateDistanceTo(this->end);
}

Line::Line(const Line &another) {
    *this = another;
    this->length = this->start.calculateDistanceTo(this->end);
}

Line &Line::operator=(const Line &another) {
    this->start = another.getStart();
    this->end = another.getEnd();
    this->length = this->start.calculateDistanceTo(this->end);
    return *this;
}

Line::~Line() = default;
