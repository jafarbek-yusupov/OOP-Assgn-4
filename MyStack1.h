#ifndef MYSTACK1_H
#define MYSTACK1_H
#include "MyVector.h"

class MyStack1{
private: MyVector v;
public:
void push(int i){ v.push(i);}
void pop(){ v.pop();}
int top() const { return v.top();}
bool isEmpty() const { return v.isEmpty();}
void printStack() const{ v.printStack();}
};

#endif
