#include<iostream>
using namespace std;

int main(){
	
	int n,i,k,f=0;
	cout<<"Enter n: ";
	cin>>n;
	int a[n];
	cout<<"Enter arr elements : "<<endl;
	for(i=0;i<n;i++)cin>>a[i];
	cout<<"Enter key: ";
	cin>>k;
	for(i=0;i<n;i++){
		if(a[i]==k){
			f=i+1;
		}
	}
	
	if(f)cout<<"Key found at index: "<<f-1;
	else cout<<"Key not found.";	
	return 0;
	
}
