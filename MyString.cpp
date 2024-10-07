#include <iostream>
#include <cstring>
#include "MyString.h"

MyString::MyString(int s):len(s), bufSize(s){
    buf = new char[s+1];
    buf[s] = '\0';
}
MyString::MyString():len(0),bufSize(0){
    buf = new char[1];
    buf[0] = '\0';
}