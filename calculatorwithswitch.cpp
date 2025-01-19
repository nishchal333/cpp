#include <iostream>
using namespace std;
int main(){
    float n1,n2;
    char op;
    cin>>n1;
    cin>>op;
    cin>>n2;
    switch(op){
        case '+':
        cout<<n1+n2;
        break;
        case '-':
        cout<<n1-n2;
        break;
        case '*':
        cout<<n1*n2;
        break;
        case '/':
        cout<<n1/n2;
        break;
        default:
        cout<<"Invalid operator";
    }
}