#include "EqualTriangle.h"

EqualTriangle::EqualTriangle(double inCenterX, double inCenterY, ShapeColor inColor, double inSide)
: BaseShape(inCenterX, inCenterY, inColor) {
    side = inSide;
    height = side * sqrt(3) / 2;
}

double EqualTriangle::square() const {
    return side * height / 2;
}

double EqualTriangle::boundingRectSquare() const {
    return side * height;
};

void EqualTriangle::describe() const {
    std::cout << "Color of the shape is " << shapeColorName(this->color) << std::endl;
    std::cout << "Square of the shape is " << this->square() << std::endl;
    std::cout << "Square of bounding box of the shape is " << this->boundingRectSquare() << std::endl;
    std::cout << "Bounding box of the shape is:" << std::endl;

    BoundingPoint points[4];
    this->boundingRect(side/2, height/2, points);
    EqualTriangle::boundingRectRepr(points);
}