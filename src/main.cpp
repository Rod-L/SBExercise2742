#include <iostream>
#include "Shapes.h"

bool inputDouble(double& result) {
    std::cin >> result;
    if (std::cin.bad()) {
        std::cin.clear();
        std::cin.ignore(INT32_MAX, '\n');
        std::cout << "Invalid number format." << std::endl;
        return false;
    }
    return true;
}

void inputShape(std::string& command) {
    double inCenterX, inCenterY;
    std::cout << "Enter coordinates of center of the shape (x, y):" << std::endl;
    if (!inputDouble(inCenterX)) return;
    if (!inputDouble(inCenterY)) return;

    std::cout << "Enter color of the shape (none, red, green, blue):" << std::endl;
    std::string colorName;
    std::cin >> colorName;

    ShapeColor inColor;
    switch(colorName[0]) {
        case 'n': inColor = none;  break;
        case 'r': inColor = red;   break;
        case 'g': inColor = green; break;
        case 'b': inColor = blue;  break;
        default:
            std::cout << "Unknown color name. Setting color to none." << std::endl;
            inColor = none;
    }

    if (command == "circle") {
        std::cout << "Enter radius of the circle." << std::endl;
        double radius;
        if (!inputDouble(radius)) return;
        auto shape = Circle(inCenterX, inCenterY, inColor, radius);
        shape.describe();
    } else if (command == "square") {
        std::cout << "Enter side size of the square." << std::endl;
        double side;
        if (!inputDouble(side)) return;
        auto shape = Square(inCenterX, inCenterY, inColor, side);
        shape.describe();
    } else if (command == "rectangle") {
        std::cout << "Enter size of sides A and B of the rectangle." << std::endl;
        double sideA, sideB;
        if (!inputDouble(sideA)) return;
        if (!inputDouble(sideB)) return;
        auto shape = Rectangle(inCenterX, inCenterY, inColor, sideA, sideB);
        shape.describe();
    } else if (command == "triangle") {
        std::cout << "Enter side size of the triangle." << std::endl;
        double side;
        if (!inputDouble(side)) return;
        auto shape = EqualTriangle(inCenterX, inCenterY, inColor, side);
        shape.describe();
    }

}

int main() {
    std::cout << "Available commands:\n"
                 "circle\n"
                 "square\n"
                 "rectangle\n"
                 "triangle\n"
                 "exit\n\n";

    while (true) {
        std::cout << "Enter command:" << std::endl;
        std::string command;
        std::cin >> command;

        if (command == "exit") {
            return 0;
        } else if (command == "circle" || command == "square" || command == "rectangle" || command == "triangle") {
            inputShape(command);
        } else {
            std::cout << "Unknown command. Repeat input." << std::endl;
        }
    }
}
