#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED
#include <string>
#include <iostream>
using namespace std;

class Person{
    string name;

    public:
        Person(const string& n):name(n){};
        string getName() const {return name;};
        virtual void print() const {cout << name;};
};

#endif