#include <iostream>
#include "Shapes.h"

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
        } else if (command == "circle") {
            auto shape = Circle();
            DESCRIBE_SHAPE(shape)
        } else if (command == "square") {
            auto shape = Square();
            DESCRIBE_SHAPE(shape)
        } else if (command == "rectangle") {
            auto shape = Rectangle();
            DESCRIBE_SHAPE(shape)
        } else if (command == "triangle") {
            auto shape = EqualTriangle();
            DESCRIBE_SHAPE(shape)
        } else {
            std::cout << "Unknown command. Repeat input." << std::endl;
        }
    }
}
