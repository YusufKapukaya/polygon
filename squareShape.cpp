//
//  squareShape.cpp
//  polygon
//
//  Created by Muhammed Yusuf Kapukaya on 13.03.24.
//

#include "squareShape.hpp"

#include <iostream>
#include <string>
#include <math.h>
#include "shape.h"
#include "squareShape.h"

using namespace std;

squareShape::squareShape():shape(){};                                        //Default ctor
squareShape::squareShape(double Edge, double Size):shape(Edge, Size){};      //Converting ctor
squareShape::squareShape(const squareShape& sqr):shape(sqr){};               //Copyctor
squareShape::squareShape(squareShape&& sqr):shape(std::move(sqr)){};         //Movector

squareShape& squareShape::operator=(const squareShape& sqr)
{
    shape::operator=(sqr);
    cout<<"Copy assigment has been called."<<endl;
    return *this;
};

squareShape& squareShape::operator=(squareShape&& sqr)
{
    shape::operator=(std::move(sqr));
    cout<<"Move assigment has been called."<<endl;
    return *this;
};

double squareShape::calculateArea()
{
    area=pow(edge, 2);
    return area;
};
void squareShape::nameOfShape()
{
    cout<<"It is a squareshape."<<endl;
};
