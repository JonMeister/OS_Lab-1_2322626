//
// Created by jonat on 25/08/2024.
//

#include "RightTriangle.h"

#include <cmath>
#include <valarray>

RightTriangle::RightTriangle(float base, float height,const std::string& color):Figure(color) {
    this->base = base;
    this->height = height;
}
float RightTriangle::area() {
    return base*height/2;
}
float RightTriangle::perimeter() {
    return base+height+std::sqrt(base*base+height*height);
}

