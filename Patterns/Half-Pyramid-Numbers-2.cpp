#include<iostream>
using namespace std;

int main(){
    int l,h,n=5;
    for(l=1;l<=n;l++){
        for(h=l;h>=1;h--)cout<<h<<" ";
        cout<<endl;
    }
}