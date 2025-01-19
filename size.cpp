#include <iostream>
using namespace std;
int main(){
    int temp[10] ;
    cout<<sizeof(temp)<<endl;

    int *p = &temp[0];
    cout<<sizeof(p);
}