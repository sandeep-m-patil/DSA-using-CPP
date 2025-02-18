#include<iostream>
#include<stack>

using namespace std;
 
int main(){
    stack<string> s;
    s.push("gem");
    s.push("a");
    s.push("is");
    s.push("sandeep");
    
    cout<<s.top()<<endl;//display top element 
    //s.pop();//removes top element 
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;
    
    while (!s.empty()) {
        cout << s.top() <<" ";
        s.pop();
    }
    
    
}