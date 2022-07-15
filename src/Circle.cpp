#include "Circle.h"

Circle::Circle(double inCenterX, double inCenterY, ShapeColor inColor, double inRadius)
: BaseShape(inCenterX, inCenterY, inColor) {
    radius = inRadius;
}

double Circle::square() const {
    return atan(1) * 4 * radius * radius;
}

double Circle::boundingRectSquare() const {
    return pow((radius*2), 2);
}

void Circle::describe() const {
    std::cout << "Color of the shape is " << shapeColorName(this->color) << std::endl;
    std::cout << "Square of the shape is " << this->square() << std::endl;
    std::cout << "Square of bounding box of the shape is " << this->boundingRectSquare() << std::endl;
    std::cout << "Bounding box of the shape is:" << std::endl;

    BoundingPoint points[4];
    this->boundingRect(radius, radius, points);
    Circle::boundingRectRepr(points);
}
