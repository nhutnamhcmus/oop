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

const Point &Line::getAnEnd() const {
    return end;
}

void Line::setAnEnd(const Point &anEnd) {
    end = anEnd;
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
}

Line::~Line() = default;
