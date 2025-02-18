#include<iostream>
using namespace std;

int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int k;
    cin>>k;
    int l=0,h=9,m1,m2,f=0;
    while(l<=h){
    
    m1=l+(h-l)/3;
    m2=h-(h-l)/3;
    if(a[m1]==k || a[m2]==k)
    {
    f=1;
    break;
    }
    
    else if(k<a[m1])h=m1-1;
    
    else if (k>a[m2])l=m2+1;
    
    else{
    l=m1+1;
    h=m2-1;
    
    }
    
    
  }
    
    if(f)cout<<"key found";
    else cout<<"key not found";
    
    
    
}
