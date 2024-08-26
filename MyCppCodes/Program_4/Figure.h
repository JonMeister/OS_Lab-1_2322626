//
// Created by jonat on 25/08/2024.
//

#ifndef FIGURE_H
#define FIGURE_H
#include <string>

class Figure {
    protected:
    std::string color;

    public:
    Figure(const std::string& color);
    virtual ~Figure();

    virtual float area();
    virtual float perimeter();
    std::string getColor();
};
#endif //FIGURE_H
