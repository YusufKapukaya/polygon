//
//  triangle.cpp
//  polygon
//
//  Created by Muhammed Yusuf Kapukaya on 13.03.24.
//

#include "triangle.hpp"


#include <iostream>
#include <string>
#include <math.h>
#include "shape.h"
#include "triangle.h"

using namespace std;


triangle::triangle():shape()
{
    
    cout<<"The size of Triangle?"<<endl;
    cin>>size;
    cout<<"The edge of Triangle?"<<endl;
    cin>>edge;
    cout<<"is the Equalite the Triangle?"<<endl;
    cin>>isEquTri;
};
triangle::triangle(double Edge, bool IsEquTri):isEquTri(IsEquTri), shape(Edge)
{
    cout<<"The size of Triangle?"<<endl;
    cin>>size;
};
triangle::triangle(double Edge, double Size, bool IsEquTri):isEquTri(IsEquTri), shape(Edge, Size){};
triangle::triangle(const triangle& trg):shape(trg){};
triangle::triangle(triangle&& trg):shape(std::move(trg)){};

triangle& triangle::operator=(const triangle& tra)
{
    shape::operator=(tra);
    return *this;
};

triangle& triangle::operator=(triangle&& tra)
{
    return static_cast<triangle&>(shape::operator=(std::move(tra)));
};
triangle::~triangle()
{
    cout<<"Triangle destructor has been called."<<endl;
};

void triangle::nameOfShape()
{
    string a= isEquTri ? "equilateral " :"non equilateral ";
    cout<<"A "<< a<<"Triangle has been created and the size of a Triangle is "<<size<<endl;
};


