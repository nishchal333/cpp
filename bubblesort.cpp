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
    // for 1 to n-1 round
        for(int j=0; j<n-1; j++){
          if (arr[j] > arr[j + 1]) {
            swap(arr[j], arr[j + 1]);
          }
        }
    }
    cout << "Sorted array is ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" " ;
    }
    
}