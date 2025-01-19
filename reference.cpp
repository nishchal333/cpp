#include <iostream>
using namespace std;
int update(int& n){
    n++;
}
int main(){
    int n = 5;
    cout<<"before "<<n<<endl;
    update(n);
    cout<<"after "<<n;
}