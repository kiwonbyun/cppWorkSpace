#include <iostream>
#include <string>
using namespace std;

class GrAttrib{
    string lineColor;
    string fillColor;

    public:
     GrAttrib(): lineColor("검정색"), fillColor("흰색") {};
     GrAttrib(const string& lc, const string& fc): lineColor(lc), fillColor(fc){};
     void setLineColor(const string& lc){lineColor = lc;};
     void setFillColor(const string& fc){fillColor = fc;};
     string getLineColor (){return lineColor;};
     string getFillColor (){return fillColor;};
};

extern GrAttrib curAttrib;