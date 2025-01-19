#include <iostream>
using namespace std;
int main(){
    int arr[10] = {8,23,41,55};
    
    cout<<"address of first memory block is "<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<"address of first memory block is "<<&arr[0]<<endl;
    
    cout<<"1st  "<<*arr<<endl;
    cout<<"2nd  "<<*arr+1<<endl;
    cout<<"3rd  "<<*(arr+1)<<endl;
    cout<<"4th  "<<*(arr+2)<<endl;
}