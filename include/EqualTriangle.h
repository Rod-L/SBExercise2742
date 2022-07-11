#pragma once

#include "BaseShape.h"

class EqualTriangle: public BaseShape {
    double side = 0;
    double height = 0;

public:
    EqualTriangle();

    double square() const;

    double boundingRectSquare() const;

    BoundingPoint* boundingRect() const;
};