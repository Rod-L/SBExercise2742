#pragma once

#include "BaseShape.h"

class Rectangle: public BaseShape {
    double sideA;
    double sideB;

public:
    Rectangle(double inCenterX, double inCenterY, ShapeColor inColor, double inSideA, double inSideB);

    double square() const;

    double boundingRectSquare() const;

    void describe() const;
};