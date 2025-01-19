#include<iostream>
#include<cmath>
using namespace std;
void sort(int arr[], int n){
    if (n==0 || n==1) return;
// ek case solve kar diya -- 1st largest element ko end me rakh diya
    for(int i=0; i<=n-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }
    sort(arr, n-1);
}
int main(){
    int arr[] = {2,5,1,6,9};

    sort(arr, 5);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}