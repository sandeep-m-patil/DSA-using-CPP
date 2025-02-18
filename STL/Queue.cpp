#include<iostream>
#include<queue>

using namespace std;
 
int main(){
    queue<string> q;
    
    q.push("Naga");
    q.push("Sai");
    q.push("Satya");
    q.push("Teja");
    q.push("is");
    q.push("Diamond");
    
    cout<<q.size()<<endl;
    
    cout<<q.front()<<endl;
   // q.pop(); // for deleting first element 
    cout<<q.front()<<endl;
    
    cout<<q.size()<<endl;
    cout<<q.back()<<endl;//back also possible

    while (!q.empty()) {
        cout << q.front()<<" ";
        q.pop();
    }
    cout << '\n';
   
}