//
// Created by jonat on 25/08/2024.
//
// Derived class, inherits from Figure and represents squares.

#ifndef SQUARE_H
#define SQUARE_H
#include "Figure.h"

class Square: public Figure {
    private:
    float side;
    public:
    Square(float side,const std::string& color);
    float area() override;
    float perimeter() override;


};
#endif //SQUARE_H
