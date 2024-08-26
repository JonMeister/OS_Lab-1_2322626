/*
Authors:
- Jonathan Aristizabal (202322626)
Email:
- jonathan.aristizabal@correounivalle.edu.co

Created: 08/25/2024
Last modified: 08/26/2024
 */
#include <iostream>
#include "Rectangle.h"
#include "RightTriangle.h"
#include "Square.h"

int main(){
    std::string color;
    int option;
    std::cout   << "What do you want to draw:\n"
                <<"1. Rectangle. \n"
                <<"2. Triangle. \n"
                <<"3. Square. \n";
    std::cin >> option;
    switch(option) {
        case 1: {
            float width, height;
            std::cout << "Enter the rectangle's width: ";
            std::cin >> width;
            std::cout << "Enter the rectangle's height: ";
            std::cin >> height;
            std::cout << "Enter the color: ";
            std::cin >> color;
            Rectangle rectangle(width, height,color);
            std::cout <<"The rectangle's area is: "<<rectangle.area()<<std::endl;
            std::cout <<"The rectangle's perimeter is: "<<rectangle.perimeter()<<std::endl;
            std::cout <<"The rectangle's color is: "<<rectangle.getColor()<<std::endl;
            break;
        }
        case 2: {
            float base, height;
            std::cout << "Enter the right triangle's base: ";
            std::cin >> base;
            std::cout << "Enter the right triangle's height: ";
            std::cin >> height;
            std::cout << "Enter the color: ";
            std::cin >> color;
            RightTriangle rightTriangle(base, height,color);
            std::cout <<"The right triangle's area is: "<<rightTriangle.area()<<std::endl;
            std::cout <<"The right triangle's perimeter is: "<<rightTriangle.perimeter()<<std::endl;
            std::cout <<"The right triangle's color is: "<<rightTriangle.getColor()<<std::endl;

            break;
        }
        case 3: {
            float side;
            std::cout << "Enter the square's side: ";
            std::cin >> side;
            std::cout << "Enter the color: ";
            std::cin >> color;
            Square square(side, color);
            std::cout <<"The square's area is: "<<square.area()<<std::endl;
            std::cout <<"The square's perimeter is: "<<square.perimeter()<<std::endl;
            std::cout <<"The square's color is: "<<square.getColor()<<std::endl;            break;
        }

        default:
            std::cout << "Invalid option.\n";
            break;
    }


    return 0;
}
