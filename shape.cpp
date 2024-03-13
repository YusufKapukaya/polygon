//
//  shape.cpp
//  polygon
//
//  Created by Muhammed Yusuf Kapukaya on 13.03.24.
//

#include "shape.hpp"

#include <iostream>
#include <string>
#include <math.h>
#include "shape.h"



using namespace std;

int shape::counterOfShape=0;

int shape::getCounterOfShape()const
{
    return counterOfShape;
}


int shape::getEdgeOfShape()const
{
    return edge;
};


int shape::getInsideAngleOfShape()const
{
    return insideAngle;
};

int shape::getSizeAngleOfShape()const
{
    return size;
};

int shape::getPerimeterOfShape()const
{
    return perimeter;
};

int shape::getAreaOfShape()const
{
    return area;
};

double shape::calculatePerimeter()
{
    return perimeter=edge*size;
};

double shape::calculateArea()
{
    double s=(edge*size/2);
    return sqrt(s*pow((s-size),edge));
};

double shape::calculateInsideAngle()
{
    return insideAngle=(edge-2)*180;
};


shape::shape(double Edge):edge{Edge}
{
    cout<<"How long do you need a edge?"<<endl;
    cin>>size;
    counterOfShape++;
}

shape::shape(double Edge, double Size):edge{Edge},size{Size}
{
    counterOfShape++;
};

shape::shape(const shape& cshape)
{
    edge=cshape.edge;
    size=cshape.size;
    insideAngle=cshape.insideAngle;
    perimeter=cshape.perimeter;
    cout<<"Copy Ctor has called."<<endl;
};

shape::shape(shape&& cshape)
{
    if(this != &cshape)
    {
        edge=cshape.edge;
        size=cshape.size;
        insideAngle=cshape.insideAngle;
        perimeter=cshape.perimeter;
        
        cshape.edge=0;
        cshape.size=0;
        cshape.insideAngle=0;
        cshape.perimeter=0;
        cout<<"Move Ctor has called."<<endl;
    }
};

shape& shape::operator=(const shape& shp)
{
    edge=shp.edge;
    size=shp.size;
    insideAngle=shp.insideAngle;
    perimeter=shp.perimeter;
    cout<<"Copy assigment has called."<<endl;
    return *this;
};

shape& shape::operator=(shape&& shp)
{
    if(this != &shp)
    {
        edge=shp.edge;
        size=shp.size;
        insideAngle=shp.insideAngle;
        perimeter=shp.perimeter;
        
        shp.edge=0;
        shp.size=0;
        shp.insideAngle=0;
        shp.perimeter=0;
        cout<<"Move assigment has called."<<endl;
    }
    return *this;
};

shape::~shape()
{
    cout<<"Destructor has called for shape."<<endl;
}


