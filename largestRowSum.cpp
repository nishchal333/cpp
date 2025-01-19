#include<iostream>
using namespace std;

int largestrowSum(int arr[][3], int row, int col){
    int maxi = INT64_MIN;
    int rowIndex = -1;
    for(int i=0; i<=2; i++){
        int sum = 0;
        for(int j=0; j<=2; j++){
            sum += arr[i][j];
        }
        if(sum > maxi){
            maxi = sum;
            rowIndex = i;
        }
    }
    cout << "Maximum sum is "<< maxi<<endl;
    return rowIndex;
}
int main(){
    int arr[3][3];
    cout<<"Enter elements ";
    for(int i=0; i<=2; i++){
        for(int j=0; j<=2; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"You entered following data "<<endl;
    for(int i=0; i<=2; i++){
        for(int j=0; j<=2; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout <<"Maximun row index is " <<largestrowSum(arr,3,3);
    return 0;
}