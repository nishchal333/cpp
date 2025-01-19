#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string>s;
    s.push("nishchal");
    s.push("jain");
    s.push("GGV");
    cout<<"top element "<<s.top()<<endl;
    s.pop();
    cout<<"top element "<<s.top()<<endl;
}