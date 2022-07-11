#pragma once

#include <iostream>
#include <cmath>
#include "ShapeColor.h"

struct BoundingPoint{
    double x = 0;
    double y = 0;
};

class BaseShape {
public:
    double centerX = 0;
    double centerY = 0;
    ShapeColor color = none;

    BaseShape();

    BoundingPoint* boundingRect(double shiftX, double shiftY) const;

    static void boundingRectRepr(BoundingPoint points[]);

    static std::string shapeColorName(ShapeColor color);
};

