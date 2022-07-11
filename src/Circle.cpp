#include "Circle.h"

Circle::Circle() {
    std::cout << "Enter radius of the circle:" << std::endl;
    std::cin >> radius;
}

double Circle::square() const {
    return atan(1) * 4 * radius * radius;
}

double Circle::boundingRectSquare() const {
    return pow((radius*2), 2);
}

BoundingPoint* Circle::boundingRect() const {
    return BaseShape::boundingRect(radius, radius);
}
