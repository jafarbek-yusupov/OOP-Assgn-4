#include <iostream>
#include "MyStack1.h"
#include "MyStack2.h"
using namespace std;

int main(){
    MyStack1 s1; MyStack2 s2; int c; cout << "Enter characters (use '-1' for backspace, '-99' to stop): ";
    while(true){
        cin >> c; if(c == -99){ break;}
        if(c == -1){
            if(!s1.isEmpty()){ s1.pop();}
            if(!s2.isEmpty()){ s2.pop();}
        }
        else{ s1.push(c); s2.push(c);}
    }
    cout << "MyStack1: "; s1.printStack();
    cout << "MyStack2: "; s2.printStack();
    return 0;
}
