#include<iostream>
using namespace std;
bool search(int arr[], int size, int target){
    if (size == 0) return false;
    if (arr[0] == target) return true;

    bool restPart = search(arr+1, size-1, target);
    return restPart;
}
int main(){
    int arr[5] = {4,5,8,2,1};
    int size = 5;
    int target;
    cout<<"Enter target";
    cin>>target;
    bool ans = search(arr, size, target);

    if(ans){
        cout<<"target is found in given array";
    }
    else {
         cout<<"target is not found in given array";
    }
}