#include<iostream>
#include<vector>
using namespace std;

int main()
{   
    vector<int> arr ;
    int n;
    cout<<"Enter the size of array ";
    cin>>n;
    arr.resize(n);
    cout << "Enter the element of array ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] ;
    }
    for(int i=1; i<n; i++){
       int temp = arr[i];
       int j = i-1;
       for( ; j>=0; j--){
        if(arr[j] > temp){
            // shift 
            arr[j+1] = arr[j];
        }
        else {
            break; 
        }
       }
       arr[j+1] = temp;
    }
    cout << "Sorted array is ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" " ;
    }
    
}