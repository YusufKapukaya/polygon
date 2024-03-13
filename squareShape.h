//
//  squareShape.h
//  polygon
//
//  Created by Muhammed Yusuf Kapukaya on 13.03.24.
//

#ifndef squareShape_h
#define squareShape_h

class squareShape:public shape
{

public:
    squareShape();                                            //Default ctor
    squareShape(double Edge, double Size);                   //Converting ctor
    squareShape(const squareShape& sqr);                    //Copyctor
    squareShape(squareShape&& sqr);                        //Movector
    squareShape& operator=(const squareShape& sqr);
    squareShape& operator=(squareShape&& sqr);
    
    
    double calculateArea()override;
    void nameOfShape()override;
    
};

#endif /* squareShape_h */
