#pragma once

#include "BaseShape.h"

class Square: public BaseShape {
    double side;

public:
    Square(double inCenterX, double inCenterY, ShapeColor inColor, double inSide);

    double square() const;

    double boundingRectSquare() const;

    void describe() const;
};