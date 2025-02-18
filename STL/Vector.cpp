#include<iostream>
#include<vector>

using namespace std;
int main(){
    
    vector<int> v={12,45,23,67,44};
    cout<<"Capacity "<<v.capacity()<<endl;
    
    v.push_back(1);
    cout<<"Capacity "<<v.capacity()<<endl;
    
    v.push_back(2);
    v.push_front(32);//pushing the item at front
    v.insert(v.begin(),1);//insert is a method used to insert a element at any index IT TAKES 2 arrguments 1 for index and other for element, .begin used to get the index of first element i.e 0 
    v.reverse();
    cout<<"Capacity "<<v.capacity()<<endl;
    
    v.push_back(3);
    cout<<"Capacity "<<v.capacity()<<endl;
    cout<<"Size "<<v.size()<<endl;
    
    
    cout<<"Element at 2nd index "<<v.at(2)<<endl;
    cout<<"Element at 2nd index "<<v[2]<<endl;
    
    cout<<"front "<<v.front()<<endl;
    cout<<"back "<<v.back()<<endl;
    
    for(int i:v)cout<<i<<" "; //for each 
    
    v.pop_back();//removes back element
    
    cout<<endl;
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    
    cout<<"Size "<<v.size()<<endl;
    v.clear();
    cout<<"Size "<<v.size()<<endl;
    
    return 0; 
}