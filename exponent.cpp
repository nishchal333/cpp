#include<iostream>
using namespace std;
int power(int a, int b){
    if (b==0) return 1;
    if (b==1) return a;

    int ans = power(a, b/2); // recursive call

    if (b%2 == 0){ // if b is even 
        return ans*ans;
    }
    else {  // if b is odd 
        return a*ans*ans;
    }
}
int main(){
    int a = 2;
    int b = 3;

    int ans = power(a,b);
    cout<<"Answer is "<<ans<<endl;

}