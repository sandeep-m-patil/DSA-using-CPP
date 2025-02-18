#include<iostream>
using namespace std;

int main(){
    int l,h,n=5;
    for(l=n;l>0;l--){
        for(h=0;h<n-l;h++)cout<<"  ";
        for(h=0;h<l;h++)cout<<"* ";
        cout<<endl;
    }
}