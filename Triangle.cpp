#include "Triangle.h"
#include <iostream>
using namespace std;

Triangle::Triangle(const double v[3][2]){
    x1 = v[0][0]; 
    y1 = v[0][1];
    x2 = v[1][0];
    y2 = v[1][1];
    x3 = v[2][0];
    y3 = v[2][1];
}
void Triangle::move(double dx, double dy){
    x1 += dx;
    x2 += dx;
    x3 += dx;
    y1 += dy;
    y2 += dy;
    y3 += dy;
}

void Triangle::scale(double d){
    x1 *= d;
    x2 *= d;
    x3 *= d;
    y1 *= d;
    y2 *= d;
    y3 *= d;
}

void Triangle::draw()const{
    cout << "삼각형 그리기" << endl;
}