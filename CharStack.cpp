#include <iostream>
#include "CharStack.h"
using namespace std;

bool CharStack::push(char ch){
    if(chkFull()){
        cout << "stack is full" << endl;
        return false;
    }
    buf[--top]=ch;
    return true;
}

char CharStack::pop(){
    if(chkEmpty()){
        cout << "stack is empty" << endl;
        return 0;
    }
    return buf[top++];
}