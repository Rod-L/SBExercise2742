#pragma once

#include <string>

enum ShapeColor: uint8_t {
    none,
    red,
    blue,
    green
};

std::string ShapeColorName(ShapeColor color);