#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n , bit , ans=0;
    cout<<"Enter any number ";
    cin>>n;
    while (n!=0)
    {   int i;
        bit = n & 1;
        ans = bit * pow(10,i) + ans;
        n=n>>1;
        i++;
    }
    cout<<ans;
}