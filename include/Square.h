#pragma once

#include "BaseShape.h"

class Square: public BaseShape {
    double side = 0;

public:
    Square();

    double square() const;

    double boundingRectSquare() const;

    BoundingPoint* boundingRect() const;
};