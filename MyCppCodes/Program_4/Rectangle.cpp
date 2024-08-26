//
// Created by jonat on 25/08/2024.
//

#include "Rectangle.h"
Rectangle::Rectangle(const float width, const float height, const std::string& color): Figure(color) {
    this->width = width;
    this->height = height;
}

float Rectangle::area() {
    return width * height;
}
float Rectangle::perimeter() {
    return 2 * (width + height);
}
