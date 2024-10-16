// #include <iostream>
// #include <string>
// #include "GrAttrib.h"
// using namespace std;

// class Figure{
//     protected:
//         GrAttrib attrib;
//     public:
//         Figure():attrib(curAttrib){}
//         void setLineColor(const string& lc){
//             attrib.setLineColor(lc);
//         }
//         void setFillColor(const string& fc){
//             attrib.setFillColor(fc);
//         }
//         virtual void move(double dx, double dy) = 0;
//         virtual void scale(double s) = 0;
//         virtual void draw() const = 0;
// };