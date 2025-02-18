//Insertion Sort - works faster for sorted list / array 
//Time Complexcity - 
#include <iostream>
using namespace std;

int main(){
	int i,j,temp;
	int a[7]={1,2,3,4,5,6,7};
	
	for(i=1;i<7;i++){
		temp=a[i];
		for(j=i-1;j>=0;j--){
			if(temp<a[j])a[j+1]=a[j];
			else break;
		}
	    a[j+1]=temp;
	}
	
	for(i=0;i<7;i++)cout<<a[i]<<" ";

	return 0;	
}
