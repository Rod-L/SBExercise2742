#pragma once

#include "BaseShape.h"

class Circle: public BaseShape {
    double radius = 0;

public:
    Circle();

    double square() const;

    double boundingRectSquare() const;

    BoundingPoint* boundingRect() const;
};
