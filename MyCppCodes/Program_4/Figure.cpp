//
// Created by jonat on 25/08/2024.
//
#include<iostream>
#include "Figure.h"

Figure::Figure(const std::string &color) {
    this->color = color;
}
float Figure::area() {
    return 0;
}
float Figure::perimeter() {
    return 0;
}
std::string Figure::getColor() {return color;}

Figure::~Figure() = default;


