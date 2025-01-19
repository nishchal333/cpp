#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of array";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of array";
    for(int i=0; i<=(size-1); i++){
        cin>>arr[i];
    }
    for(int i=0; i<=(size-1); i+=2){
        if (i+1<=(size-1)){
        swap(arr[i],arr[i+1]);
        }
     }
     for(int i=0; i<=(size-1); i++){
        cout<<arr[i];
     }
}