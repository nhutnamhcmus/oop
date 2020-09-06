//
// Created by sakur on 9/6/2020.
//

#include "Triangle.h"

Triangle::Triangle(const Point &nodeA, const Point &nodeB, const Point &nodeC) : node_a(nodeA), node_b(nodeB),
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
