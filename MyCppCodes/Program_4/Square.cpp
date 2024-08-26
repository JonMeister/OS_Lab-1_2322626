//
// Created by jonat on 25/08/2024.
//

#include "Square.h"
Square::Square(float side, const std::string& color): Figure(color) {
    this->side = side;
}
float Square::area() {
    return side * side;
}
float Square::perimeter() {
    return 2 * (side + side);
}

