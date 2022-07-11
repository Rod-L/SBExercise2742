#pragma once

#include "BaseShape.h"

class Rectangle: public BaseShape {
    double sideA = 0;
    double sideB = 0;

public:
    Rectangle();

    double square() const;

    double boundingRectSquare() const;

    BoundingPoint* boundingRect() const;
};