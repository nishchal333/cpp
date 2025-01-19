#include <iostream>
using namespace std;
int main(){
    int n , digit, ans=0;
    cin>>n;
    while(n!=0){
        digit = n%10;
        if(ans > INT32_MAX/10 || INT32_MIN)
        ans = ans*10 + digit;
        n=n/10;
    }
    cout<<ans;
}