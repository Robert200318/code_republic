#include <iostream>
#include "Calculator.h"

void Calculator::set(int x, int y){
    this->x = x;
    this->y = y;
}
int Calculator::add(){
    return x+y;
}
int Calculator::sub(){
    return x-y;
}
int Calculator::mul(){
    return x*y;
}
bool Calculator::div(){
    if(y==0){
        std::cout<<"eror";
        abort();
    }
    return x/y;
}