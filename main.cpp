//
//  main.cpp
//  polygon
//
//  Created by Muhammed Yusuf Kapukaya on 13.03.24.
//

#include <iostream>
#include <vector>
#include "shape.h"
#include "triangle.h"
#include "squareShape.h"

using namespace std;

int main(int argc, const char * argv[]) {
    
    cout << "Hello, World!\n";
    triangle t{4, 1};
    squareShape sh{3,5};
    squareShape sh1{};
    triangle t1{3, 0};
    
    triangle shp[4]={t,t1};
    shape shp[4]={t,t1,sh,sh1};
    shape* shp1=new shape[4]{t,t1,sh,sh1};
    
    
   
    return 0;
}
