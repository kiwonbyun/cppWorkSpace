#include <iostream>
#include <cstring>
#include "Person.h"
using namespace std;

Person::Person(const char* name, const char* addr){
    this -> name = new char[strlen(name) + 1];
    strcpy(this->name, name);
    this -> addr = new char[strlen(addr) + 1];
    strcpy(this->addr, addr);
}

Person::~Person(){
    delete [] name;
    delete [] addr;
}

void Person::print() const {
    cout << addr << '에 사는 ' << name << " 입니다." << endl;
}

void Person::changeAddr(const char* newAddr){
    delete [] addr;
    addr = new char[strlen(newAddr)+1];
    strcpy(addr, newAddr);
}