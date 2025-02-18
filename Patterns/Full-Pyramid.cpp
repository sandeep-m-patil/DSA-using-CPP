#include<iostream>
using namespace std;

int main(){
    int l,h,n=5;
    for(l=0;l<n;l++){
        for(h=0;h<n;h++){
            if(h<n-l-1)cout<<" ";
            else cout<<"* ";
        }
        cout<<endl;
    }
}