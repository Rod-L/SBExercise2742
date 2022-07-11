#include "ShapeColor.h"

std::string ShapeColorName(ShapeColor color) {
    switch(color) {
        case none:  return "none";
        case red:   return "red";
        case blue:  return "blue";
        case green: return "green";
    }
    return "";
}