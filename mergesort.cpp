#include<iostream>
#include<vector>
using namespace std;
void merge(int  arr[], int low, int mid, int high){
    vector <int> temp;
    int left = low;
    int right = mid+1;
    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i = low; i<=high; i++){
        arr[i] = temp[i - low];
    }
}
void mS(int arr[], int low, int high){
    if (low == high) return ;
    int mid = (low+high)/2;
    mS(arr, low, mid);
    mS(arr, mid+1, high);
    merge(arr, low, mid, high);
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main (){
    int n ;
    cout<<"Enter size of vector";
    cin>>n;
    int arr[n];
    cout<<"Element : ";
    for(int i = 1; i<n; i++ ){
       cin>>arr[i];
    }
    mS(arr, 0, n-1);
    
    cout << "Sorted array: ";
    printArray(arr, n);

}