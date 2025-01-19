#include<iostream>
using namespace std;
int main(){
    int n,r;
    cin>>n;
    while(n>=1){
        r=n%10;
        n=n/10;
        cout<<r;
    }
}