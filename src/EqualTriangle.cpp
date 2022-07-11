#include "EqualTriangle.h"

EqualTriangle::EqualTriangle() {
    std::cout << "Enter side size of the triangle:" << std::endl;
    std::cin >> side;
    height = side * sqrt(3) / 2;
}

double EqualTriangle::square() const {
    return side * height / 2;
}

double EqualTriangle::boundingRectSquare() const {
    return side * height;
};

BoundingPoint* EqualTriangle::boundingRect() const {
    return BaseShape::boundingRect(side / 2, height / 2);
}