//
// Created by jonat on 25/08/2024.
//

#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Figure.h"

class Rectangle: public Figure {
    private:
    float width, height;
    public:
    Rectangle(float width, float height,const std::string& color);
    float area() override;
    float perimeter() override;

};
#endif //RECTANGLE_H
