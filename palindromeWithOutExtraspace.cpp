#include<iostream>
using namespace std;
bool palindrome(char a[], int n){
     int s = 0;
     int en = (n-1);
     while(s<=en){
        if (a[s] != a[en]){
            return 0;
        }
        else {
            s++;
            en--;
        }
     } 
     return 1;
}

int main(){
    char a[20];
    int n;
    cout<<"length of string is ";
    cin>>n;
    cout<<"Enter a string "<<endl;
    cin>>a;

    cout<<"Palindrome or not "<<palindrome(a,n);
    
}