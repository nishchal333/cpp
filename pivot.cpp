#include<iostream>
using namespace std;
int getPivot(int arr[], int n){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;

    while (start<end) {
        if (arr[mid] >= arr[0]){
            start = mid +1;
        }
        else {
            end = mid ;
        }
        mid = start + (end-start)/2;
    }  
    return end;
}

    int main(){
        int arr[5] = {8,10,17,1,3}; //sorted and rotated array
        cout<<"Index of Pivot is "<<getPivot(arr, 5)<<endl;
    }  