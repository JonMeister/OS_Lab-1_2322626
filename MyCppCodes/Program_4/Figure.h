//
// Created by jonat on 25/08/2024.
//
//Abstract class that represents the different figures that can be handled.
#ifndef FIGURE_H
#define FIGURE_H
#include <string>

class Figure {
    protected:
    std::string color;

    public:
    Figure(const std::string& color);
    virtual ~Figure(); // Class Destructor

    virtual float area(); //Abstract method
    virtual float perimeter(); //Abstract method
    std::string getColor();
};
#endif //FIGURE_H
