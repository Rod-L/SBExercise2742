#include "Rectangle.h"

Rectangle::Rectangle() {
    std::cout << "Enter dimensions (x, y) of the rectangle:" << std::endl;
    std::cin >> sideA >> sideB;
}

double Rectangle::square() const {
    return sideA * sideB;
}

double Rectangle::boundingRectSquare() const {
    return this->square();
};

BoundingPoint* Rectangle::boundingRect() const {
    return BaseShape::boundingRect(sideA / 2, sideB / 2);
}