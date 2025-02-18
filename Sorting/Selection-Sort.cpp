//Selection Sort 

#include <iostream>
using namespace std;

int main(){
	int i,j,temp,Index;
	int a[7]={-6,8,0,7,1,3,8};
	
	for(i=0;i<6;i++){
		Index=i;
		for(j=i+1;j<7;j++){
			if(a[Index]>a[j])Index=j;
		}
	    if(Index!=i){
	    	temp=a[i];
	    	a[i]=a[Index];
	    	a[Index]=temp;
		}
	}

	for(i=0;i<7;i++)cout<<a[i]<<" ";

	return 0;	
}
