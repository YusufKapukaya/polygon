//
//  triangle.h
//  polygon
//
//  Created by Muhammed Yusuf Kapukaya on 13.03.24.
//

#ifndef triangle_h
#define triangle_h


class triangle:public shape
{
    bool isEquTri;      //equilateral triangle
public:
    triangle();
    triangle(double Edge, bool IsEquTri);
    triangle(double Edge, double Size, bool IsEquTri);
    triangle(const triangle& trg);
    ~triangle()override;
    triangle(triangle&& trg);
    
    triangle& operator=(const triangle& tra);
    triangle& operator=(triangle&& tra);

    void nameOfShape()override;
    //double containerOfAngles()override;
};


#endif /* triangle_h */
