#include<iostream>
#include<list>

using namespace std;
int main(){

    list<int> p(5,100);//p list of 5 size and all elements set to 100
    
    for(int i:p)cout<<i<<" ";
    cout<<endl;
    
    list<int> l;

    
    l.push_back(1);
    l.push_front(2);
    
    list<int> n(l);//copying all elements in l into n 
    
    for(int i:l)cout<<i<<" ";
    
    cout<<endl;
    
    for(int i:n)cout<<i<<" ";
    
    cout<<endl;
    l.erase(l.begin());
    for(int i:l)cout<<i<<" ";
    
    //we can also pop_back abd pop_front ,erase 
    cout<<endl;
    cout<<"Size of l "<<l.size()<<endl;
    
    
   
    return 0; 
}