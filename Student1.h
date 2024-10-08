#include "Person1.h"

class Student: public Person{
    string school;
    public:
        void setSchool(const string& s){school = s;}
        string getSchool(){return school;}
        void print() const {
            Person::print();
            cout << " goes to " << school;
        }
};