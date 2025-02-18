#include<iostream>
#include<map>
using namespace std;

int main(){

    map<int,string> m;

    m[3]="A";
    m[7]="B";
    m[1]="C";
    
    m.insert({8,"F"});
    
    for(auto i:m)cout<<i.first<<" ";
    cout<<endl;
    for(auto i:m)cout<<i.second<<" ";
    
    m.erase(1);
    
    cout<<endl;
    for(auto i:m)cout<<i.first<<" ";
    cout<<endl;
    for(auto i:m)cout<<i.second<<" ";
}