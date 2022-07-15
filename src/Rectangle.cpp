#include "Rectangle.h"

Rectangle::Rectangle(double inCenterX, double inCenterY, ShapeColor inColor, double inSideA, double inSideB)
: BaseShape(inCenterX, inCenterY, inColor) {
    sideA = inSideA;
    sideB = inSideB;
}

double Rectangle::square() const {
    return sideA * sideB;
}

double Rectangle::boundingRectSquare() const {
    return this->square();
};

void Rectangle::describe() const {
    std::cout << "Color of the shape is " << shapeColorName(this->color) << std::endl;
    std::cout << "Square of the shape is " << this->square() << std::endl;
    std::cout << "Square of bounding box of the shape is " << this->boundingRectSquare() << std::endl;
    std::cout << "Bounding box of the shape is:" << std::endl;

    BoundingPoint points[4];
    this->boundingRect(sideA/2, sideB/2, points);
    Rectangle::boundingRectRepr(points);
}