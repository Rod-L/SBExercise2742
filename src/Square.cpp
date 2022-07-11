#include "Square.h"

Square::Square() {
    std::cout << "Enter side size of the square:" << std::endl;
    std::cin >> side;
}

double Square::square() const {
    return side * side;
}

double Square::boundingRectSquare() const {
    return this->square();
};

BoundingPoint* Square::boundingRect() const {
    return BaseShape::boundingRect(side / 2, side / 2);
}