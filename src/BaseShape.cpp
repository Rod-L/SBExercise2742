#include "BaseShape.h"

BaseShape::BaseShape(double inCenterX, double inCenterY, ShapeColor inColor) {
    centerX = inCenterX;
    centerY = inCenterY;
    color = inColor;
}

void BaseShape::boundingRect(double shiftX, double shiftY, BoundingPoint points[]) const {
    points[0].x = centerX - shiftX;
    points[0].y = centerY - shiftY;

    points[1].x = centerX - shiftX;
    points[1].y = centerY + shiftY;

    points[2].x = centerX + shiftX;
    points[2].y = centerY + shiftY;

    points[3].x = centerX + shiftX;
    points[3].y = centerY - shiftY;
}

void BaseShape::boundingRectRepr(BoundingPoint points[]) {
    // display coordinates of each point of the bounding rectangle
    for (int i = 0; i < 4; ++i) printf("(%.2f, %.2f)\n", points[i].x, points[i].y);
}

std::string BaseShape::shapeColorName(ShapeColor color) {
    switch(color) {
        case none:  return "none";
        case red:   return "red";
        case blue:  return "blue";
        case green: return "green";
    }
    return "";
}