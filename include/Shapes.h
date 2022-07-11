#pragma once

#include "ShapeColor.h"
#include "BaseShape.h"
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"
#include "EqualTriangle.h"

#define DESCRIBE_SHAPE(SHAPE) \
    std::cout << "Color of the shape is " << SHAPE.BaseShape::shapeColorName(shape.color) << std::endl;\
    std::cout << "Square of the shape is " << shape.square() << std::endl;\
    std::cout << "Square of bounding box of the shape is " << shape.boundingRectSquare() << std::endl;\
    std::cout << "Bounding box of the shape is:" << std::endl;\
    auto bound = SHAPE.boundingRect();\
    SHAPE.BaseShape::boundingRectRepr(bound);\
    delete bound;
