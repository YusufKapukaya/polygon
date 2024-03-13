//
//  shape.h
//  polygon
//
//  Created by Muhammed Yusuf Kapukaya on 13.03.24.
//

#ifndef shape_h
#define shape_h

using namespace std;

class shape
{
protected:
    
    double edge;
    double size;
    double insideAngle;
    double perimeter;    //umfang
    double area;

    
public:
    static int counterOfShape;
    shape()=default;
    shape(double Edge);
    shape(double Edge, double Size);
    shape(const shape& cshape);
    shape(shape&& cshape);
    virtual ~shape();
    
    shape& operator=(const shape& shp);
    shape& operator=(shape&& shp);
    
    int getCounterOfShape()const;
    int getEdgeOfShape()const;
    int getInsideAngleOfShape()const;
    int getSizeAngleOfShape()const;
    int getPerimeterOfShape()const;
    int getAreaOfShape()const;
    
    virtual double calculatePerimeter();
    virtual double calculateArea();
    virtual double calculateInsideAngle();
    
    virtual void nameOfShape()=0;
    
};

#endif /* shape_h */
