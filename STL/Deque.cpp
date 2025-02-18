#include<iostream>
#include<deque>

using namespace std;
int main(){
    
    deque<int> d;
    
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    
    for(int i:d)cout<<i<<" ";
    
    d.pop_back();
    cout<<endl;
    for(int i:d)cout<<i<<" ";
    
    d.pop_front();
    cout<<endl;
    for(int i:d)cout<<i<<" ";
    
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    
    cout<<endl;
    for(int i:d)cout<<i<<" ";
    cout<<endl;
    
    cout<<d.at(2)<<endl;
    
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    
    cout<<d.empty()<<endl;
    cout<<d.size()<<endl;
    d.erase(d.begin()+2);//delete at 2nd  elements from beginning 
    cout<<d.size()<<endl;
    for(int i:d)cout<<i<<" ";
    cout<<endl;
    cout<<d.size()<<endl;
    
   
    return 0; 
}