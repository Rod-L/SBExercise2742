#include "Square.h"

Square::Square(double inCenterX, double inCenterY, ShapeColor inColor, double inSide)
: BaseShape(inCenterX, inCenterY, inColor) {
    side = inSide;
}

double Square::square() const {
    return side * side;
}

double Square::boundingRectSquare() const {
    return this->square();
};

void Square::describe() const {
    std::cout << "Color of the shape is " << shapeColorName(this->color) << std::endl;
    std::cout << "Square of the shape is " << this->square() << std::endl;
    std::cout << "Square of bounding box of the shape is " << this->boundingRectSquare() << std::endl;
    std::cout << "Bounding box of the shape is:" << std::endl;

    BoundingPoint points[4];
    this->boundingRect(side/2, side/2, points);
    Square::boundingRectRepr(points);
}