#include "XYPoint.h"
#include <iostream>

// Default constructor implementation
XYPoint::XYPoint() : xPoint(0.0), yPoint(0.0) {}

// Parameterized constructor implementation
XYPoint::XYPoint(double x, double y) : xPoint(x), yPoint(y) {}


// Getter implementations
double XYPoint::getX() const {
    return xPoint;
}

double XYPoint::getY() const {
    return yPoint;
}

// Setter implementations
void XYPoint::setX(double x) {
    xPoint = x;
}

void XYPoint::setY(double y) {
    yPoint = y;
}
