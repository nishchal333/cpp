#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++) f=f*i;
    return f;
}
int main(){
    int n,r,p;
    cout<<"Enter n";
    cin>>n;
    cout<<"Enter r";
    cin>>r;
    p=fact(n)/fact(n-r);
    cout<<"Permutation of given data is "<<p;
}