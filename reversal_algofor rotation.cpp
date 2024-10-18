//reversal algo for array rotation
#include<iostream>
using namespace std;

void reverse(int arr[],int start,int end){
	int temp;
	while(start< end){
		temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}

void revalgo(int arr[],int k,int l){
	
	if(k==0)
	  return;	
//	int n=sizeof(arr)/sizeof(int);
//	cout<<"length of an array::"<<n<<endl;
	//k=k%n;
	reverse(arr,0,k-1);
	reverse(arr,k,l-1);
	reverse(arr,0,l-1);
	for(int i=0;i<l;i++){
		cout<<arr[i]<<"\t";
	}
}

int main(){
	int arr[]={20,45,67,78,234,78};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"length of an array::"<<n<<endl;
	int d=3;
	revalgo(arr,d,n);
}
