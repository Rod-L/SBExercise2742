#pragma once

#include "BaseShape.h"

class EqualTriangle: public BaseShape {
    double side;
    double height;

public:
    EqualTriangle(double inCenterX, double inCenterY, ShapeColor inColor, double inSide);

    double square() const;

    double boundingRectSquare() const;

    void describe() const;
};