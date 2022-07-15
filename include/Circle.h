#pragma once

#include "BaseShape.h"

class Circle: public BaseShape {
    double radius;

public:
    Circle(double inCenterX, double inCenterY, ShapeColor inColor, double inRadius);

    double square() const;

    double boundingRectSquare() const;

    void describe() const;
};
