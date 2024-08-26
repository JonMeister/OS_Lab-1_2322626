//
// Created by jonat on 25/08/2024.
//
// Derived class, inherits from Figure and represents right triangles.

#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H
#include "Figure.h"

class RightTriangle: public Figure {
    private:
    float base, height;
    public:

    RightTriangle(float base, float height, const std::string &color);

    float area() override;
    float perimeter() override;

};
#endif //RIGHTTRIANGLE_H
