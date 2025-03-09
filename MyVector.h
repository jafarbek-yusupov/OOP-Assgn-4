#ifndef MYVECTOR_H
#define MYVECTOR_H
class MyVector{
private: int data[100]; int size;
public:
MyVector() : size(0) {}
void push(int i){ if(size<100){ data[size++] = i;}}
void pop(){ if(size>0){ --size;}}
int top() const { return (size>0 ? data[size-1] : -1);}
bool isEmpty() const { return size == 0;}
void printStack() const { 
    for(int i=(size-1); i>=0; i--){ std::cout << data[i] << " ";} std::cout << std::endl;
}
};

#endif
