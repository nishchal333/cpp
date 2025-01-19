#include<iostream>
using namespace std;
bool ispresent(int arr[][4], int target, int row, int col){
    for(int i=0; i<=2; i++){
        for(int j=0; j<=3; j++){
            if(arr[i][j] == target){
                return 1;
            }
        }
    }
    return 0;
}
int main(){
    int arr[3][4];
    cout<<"Enter elements ";
    for(int i=0; i<=2; i++){
        for(int j=0; j<=3; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"You entered following data "<<endl;
    for(int i=0; i<=2; i++){
        for(int j=0; j<=3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int target;
    cout<<"Enter your targeted value  ";
    cin>>target;
    if (ispresent(arr,target,3,4)){
        cout<<"Element found";
    }
    else cout<<"Not found";


}