#include <iostream>
using namespace std;
int main(){
    int x=3;
    int* p=&x;
    cout<<&x<<endl; // x ka address
    cout<<p<<endl; // x ka address
    cout<<*p<<endl; // dereference or star operator
    cout<<&p<<endl; // p ka address 

    // copy a pointer
    int *q = p;
    cout<<q<<endl;
    cout<<*q<<endl;
}