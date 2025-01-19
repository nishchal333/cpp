#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int, string> m;

    m[1]= "babbar";
    m[12]= "nishchal";
    m[3]= "jain";
    m.insert( {5,"bheem"});
    
    for(auto i:m){
     cout << i.first<<" "<<i.second  << endl;
    }
    cout << "finding 12 -->"<< m.count(12)<<endl;
    cout<<m.size();
}