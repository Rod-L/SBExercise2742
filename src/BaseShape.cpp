#include "BaseShape.h"

BaseShape::BaseShape() {
    std::cout << "Enter coordinates of center of the shape (x, y):" << std::endl;
    std::cin >> centerX >> centerY;

    std::cout << "Enter color of the shape (none, red, green, blue):" << std::endl;
    std::string colorName;
    std::cin >> colorName;

    switch(colorName[0]) {
        case 'n': color = none;  break;
        case 'r': color = red;   break;
        case 'g': color = green; break;
        case 'b': color = blue;  break;
        default:
            std::cout << "Unknown color name. Setting color to none." << std::endl;
            color = none;
    }
}

BoundingPoint* BaseShape::boundingRect(double shiftX, double shiftY) const {
    auto points = new BoundingPoint[4];
    points[0].x = centerX - shiftX;
    points[0].y = centerY - shiftY;

    points[1].x = centerX - shiftX;
    points[1].y = centerY + shiftY;

    points[2].x = centerX + shiftX;
    points[2].y = centerY + shiftY;

    points[3].x = centerX + shiftX;
    points[3].y = centerY - shiftY;

    return  points;
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