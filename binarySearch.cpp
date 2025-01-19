#include<iostream>
using namespace std;
int binarySearch(int arr[], int start, int end, int key){
    int mid = start + (end-start)/2;

    if(key == arr[mid]) return mid ;

    if(key > arr[mid]) return binarySearch(arr,mid+1, end, key);
    else return binarySearch(arr,start, mid-1, key);
}

int main(){
    // int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};
    int size = 5;
    int start = 0;
    int end = size-1;
    
    // int evenIndex = binarySearch(even, 6, 20);
    // cout<<"Index of given number is  "<<evenIndex<<endl;

    int oddIndex = binarySearch(odd, start, end, 14);
    cout<<"Index of given number is  "<<oddIndex<<endl;
}