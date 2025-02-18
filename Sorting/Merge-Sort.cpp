//WAP to merge two sorted arrays into single sorted array

#include<iostream>
using namespace std;

int main(){
	int n1,n2,i,j,k;
	cout<<"Enter n1 and n2 : ";
	cin>>n1>>n2;
	
	int a[n1],b[n2],c[n1+n2];
	
	cout<<"Enter element for a: \n";
	for(i=0;i<n1;i++)cin>>a[i];
	
	cout<<"Enter element for b: \n";
	for(j=0;j<n2;j++)cin>>b[j];
	
	
	
	i=0;j=0;k=0;
	//Selecting element based on conditions and inserting / placing them in c-array
	while(i<n1 && j<n2){
		
		if(a[i]>b[j]) c[k++]=b[j++];
		else c[k++]=a[i++];	
		
	}
	
	 // if there are remaining elements of the first array, move them

	while(i<n1){
		c[k++]=a[i++];	
	}
	
	
	 // if there are remaining elements of the first array, move them
	
	while(j<n2){
		c[k++]=b[j++];
	}
	

	cout<<"The element for c: \n";
	for(k=0;k<(n1+n2);k++)cout<<c[k]<<" ";
	
}