#include<iostream>
using namespace std;

int main(){
    int l,h,n=5;
    for(l=1;l<=n;l++){
        char c='A'+l-1;
        for(h=1;h<=n;h++)cout<<c++<<" ";
        cout<<endl;
    }
}