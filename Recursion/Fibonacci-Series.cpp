#include <iostream>
using namespace std;
int fib(int n){
    if(n==1)return 0;
    if(n==2)return 1;
    return fib(n-1)+fib(n-2);
}
int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    //for printing all n terms
    for(int i=1;i<=n;i++)cout<<fib(i)<<" ";
    //printing nth term
    //cout<<fib(5);
    return 0;
}