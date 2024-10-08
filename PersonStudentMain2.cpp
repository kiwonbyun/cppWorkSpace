#include <iostream>
#include "Student2.h"
using namespace std;

int main(){
    Person dudley("Dudely");
    Student harry("Harry","Hogwarts");
    dudley.print();
    cout << endl;
    harry.print();
    cout << endl;
    harry.Person::print();
    cout << endl;
    return 0;
}