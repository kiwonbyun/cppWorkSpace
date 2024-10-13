#include "Figure.h"
class Triangle: public Figure{
    double x1,x2,x3,y1,y2,y3;
    public:
        Triangle(const double v[3][2]);
        void move(double dx, double dy);
        void scale(double s);
        void draw()const;
};