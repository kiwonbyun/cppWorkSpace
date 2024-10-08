#include <iostream>
#include <string>
#include "Person2.h"
using namespace std;


class Student : public Person{
    string school;
    public:
        Student(const string& n,const string& s):Person(n){school = s;}
        ~Student(){cout<< "Student 소멸자" << endl;}
        string getSchool() const {return school;}
        void print() const {
            Person::print();
            cout << " goes to " << school;
        }
};
