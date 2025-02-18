#include<iostream>
#include<set>
using namespace std;

int main(){

    set<int> s;

    s.insert(5);
    s.insert(0);
    s.insert(1);
    s.insert(3);
    s.insert(7);
    s.insert(1);
    
    //elements are sorted and duplicated are not allowed
    for(auto i:s)cout<<i<<" ";
    
    s.erase(s.begin());
    cout<<endl;
    for(auto i:s)cout<<i<<" ";
    cout<<endl;
    
    cout<<s.count(1)<<endl;
    
}