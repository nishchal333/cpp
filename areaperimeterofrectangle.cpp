#include <iostream>
using namespace std;
int main(){
    int l,b,A,P;
    cout<<"Enter length of rectangle : ";
    cin>>l;
    cout<<"Enter breadth of rectangle : ";
    cin>>b;
    A = l*b;
    P = 2*(l+b);
    if (A>P)  cout<<"Area is greater than perimeter of rectangle";
    if (A<P)  cout<<"Area is lesser than perimeter of rectangle";


}