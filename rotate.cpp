#include<iostream>
using namespace std;

int main(){
	int arr[]={1,2,3,4,5};
	int n=2;
	int len=(sizeof(arr)/sizeof(arr[0]))+1;
	cout<<"length of array:"<<len<<endl;
	for(int i=0;i<n;i++){
		int first=arr[0],j;
		for(j=0;j<len;j++){
			arr[j]=arr[j+1];
			
		}
		arr[j]=first;
	}
	
	cout<<"############Printing array#############"<<endl;
	
	for(int i=0;i<len;i++){
		printf("%d",arr[i]);
	}
	return 0;
}
