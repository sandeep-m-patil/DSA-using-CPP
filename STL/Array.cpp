#include<iostream>
#include<array>

using namespace std;
int main(){
    //basic/normal Array
    int b[5]={1,2,3,4,5};
    for(int i : b)cout<<i<<" ";
    
    cout<<endl;

    array<int,5> a = {1,2,3,4,5};
    for(int i : a)cout<<i<<" ";
    
    cout<<endl;
    
    //Both normal and stl arrays are static(fixed sized)
    
    //stl Array methods
    cout<<a.size()<<endl;//returns size 
    cout<<a.at(2)<<endl;//Char at 2nd index
    cout<<a.empty()<<endl;//Empty or not ( bool )
    cout<<a.front()<<endl;//first element
    cout<<a.back()<<endl;//last element
    
    return 0;   
}