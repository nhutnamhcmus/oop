//
// Created by sakur on 9/6/2020.
//

#include "Triangle.h"
#include <cmath>

Triangle::Triangle() : node_a(1, 1), node_b(1, 2), node_c(4, 2) {}

Triangle::Triangle(const Point &nodeA, const Point &nodeB, const Point &nodeC) :
        node_a(nodeA),
        node_b(nodeB),
        node_c(nodeC) {}

const Point &Triangle::getNodeA() const {
    return node_a;
}

void Triangle::setNodeA(const Point &nodeA) {
    node_a = nodeA;
}

const Point &Triangle::getNodeB() const {
    return node_b;
}

void Triangle::setNodeB(const Point &nodeB) {
    node_b = nodeB;
}

const Point &Triangle::getNodeC() const {
    return node_c;
}

void Triangle::setNodeC(const Point &nodeC) {
    node_c = nodeC;
}

Triangle::Triangle(const Triangle &another) :
        node_a(another.getNodeA().getX(), another.getNodeA().getY()),
        node_b(another.getNodeB().getX(), another.getNodeB().getY()),
        node_c(another.getNodeC().getX(), another.getNodeC().getY()) {}

double Triangle::area() const {
    double a = this->getNodeB().calculateDistanceTo(this->getNodeC());
    double b = this->getNodeA().calculateDistanceTo(this->getNodeC());
    double c = this->getNodeA().calculateDistanceTo(this->getNodeB());
    double p = 0.5 * (a + b + c);
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

double Triangle::perimeter() const {
    double a = this->getNodeB().calculateDistanceTo(this->getNodeC());
    double b = this->getNodeA().calculateDistanceTo(this->getNodeC());
    double c = this->getNodeA().calculateDistanceTo(this->getNodeB());
    return a + b + c;
}

