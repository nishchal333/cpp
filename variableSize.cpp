#include<iostream>
using namespace std;
int sum(int *arr, int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
    int n ;
    cout<<"Enter size of array";
    cin>>n;

    int *arr = new int[n]; // dynamic memory allocation(in heap memory)

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Sum of element array "<<sum(arr, n);
}