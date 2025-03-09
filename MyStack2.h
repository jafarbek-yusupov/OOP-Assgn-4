#ifndef MYSTACK2_H
#define MYSTACK2_H
#include "MyLinkedList.h"
// #include <iostream>

class MyStack2 {
private: MyLinkedList* head;
public: 
MyStack() : head(nullptr) {}
void push(int i){
    MyLinkedList* nn = new MyLinkedList(i);
    nn->next = head; head = nn;
}
void pop(){ if(head){ MyLinkedList* tmp = head; head = head->next; delete tmp;}}
int top() const { return head ? head->value : -1;}
bool isEmpty() const { return head==nullptr;}
void printStack() const { for(MyLinkedList* cc=head; cc; cc->next){ std::cout << cc->value << " ";} std::cout << std::endl;}
};

#endif
