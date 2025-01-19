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
    
    for(int i=0; i<n-1; i++){
        int minIndex = i;

        for(int j=i; j<n; j++){
            if (arr[j] < arr[minIndex])
               minIndex = j;
        }
        swap(arr[i], arr[minIndex]);  
    }
    cout << "Sorted array is ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" " ;
    }
    
}