#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
void reverse(string& str, int i, int j){
    if(i>j) return;

    swap(str[i],str[j]);
    i++;
    j--;

    reverse(str, i, j);
}
int main(){
    string name = "Nishchal jain";
    reverse(name, 0, name.length()-1);
    cout<<name;

}