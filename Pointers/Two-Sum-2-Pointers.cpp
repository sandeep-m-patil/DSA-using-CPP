#include<iostream>
using namespace std;

int main(){
	int sum=11,a[]={1,5,16,8,10,14,21,82,56,101};
	int l=0,n=10,h=n-1;
	while(l<=h){
		if(a[l]+a[h]==sum){
			cout<<l<<" "<<h<<endl;
			break;
		}
	}
	
	return 0;
}
