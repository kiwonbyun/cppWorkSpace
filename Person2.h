#include <iostream>
#include <string>
using namespace std;

class Person{
    string name;
    public:
        Person(const string& n){
            name=n;
        }
        ~Person(){
            cout << "Person의 소멸자" << endl;
        }
        string getName()const{
            return name;
        }
        void print()const{
            cout << name;
        }
};