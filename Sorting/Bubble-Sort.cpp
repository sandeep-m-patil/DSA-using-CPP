//Bubble Sort - Used for finding n largest elements in given list

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter n: ";
	cin>>n;
	
	int a[n],i,j;
	
	cout<<"Enter elements: \n";
	for(i=0;i<n;i++)cin>>a[i];
	
	
	cout<<"The Orginal List is : "<<endl;
	for(i=0;i<n;i++)cout<<a[i]<<" ";
	
	
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				
				a[j]=a[j]+a[j+1];
				a[j+1]=a[j]-a[j+1];
				a[j]=a[j]-a[j+1];
			}
		}
	}
	
	cout<<"\nThe sorted List is : "<<endl;
	for(i=0;i<n;i++)cout<<a[i]<<" ";
}
