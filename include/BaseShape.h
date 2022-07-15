#pragma once

#include <iostream>
#include <cmath>
#include "ShapeColor.h"

struct BoundingPoint{
    double x;
    double y;
};

class BaseShape {
public:
    double centerX;
    double centerY;
    ShapeColor color;

    BaseShape(double inCenterX, double inCenterY, ShapeColor inColor);

    void boundingRect(double shiftX, double shiftY, BoundingPoint points[]) const;

    static void boundingRectRepr(BoundingPoint points[]);

    static std::string shapeColorName(ShapeColor color);
};

