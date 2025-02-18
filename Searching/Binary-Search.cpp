#include<iostream>
using namespace std;

int binary_search(int a[],int n,int k){
	int l=0,h=n-1,m;
	while(l<=h){
		m=(l+h)/2;
		if(a[m]==k)return m;
		else if(a[m]>k){
			l=m+1;
		}
		else if(a[m]<k)h=m-1;
	}
	
	return -1;
	
}

int main(){
	int n,i,k;
	cout<<"Enter n: ";
	cin>>n;
	int a[n];
	cout<<"Enter arr elements : \n";
	for(i=0;i<n;i++)cin>>a[i];
	cout<<"Enter key: ";
	cin>>k;
	int search = binary_search(a,n,k);
	if(search == -1){
		cout<<"Key not found";
	}
	else{
		cout<<"key found at index : "<<search;
	}
	
}
