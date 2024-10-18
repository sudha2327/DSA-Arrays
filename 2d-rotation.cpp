#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	
	int arr[4][4]={{1,2,4,10},{11,23,56,78},{5,6,7,67},{8,676,9,0}};
	int k=2;
	int len=(sizeof(arr)/sizeof(arr[0][0]));
	cout<<"length of an array:"<<len<<endl;
	 cout<<"########.........COLOCK ROTATION IN ARRAY............#########"<<endl;
	for(int i=0;i<4;i++){
		for(int j=3;j>=0;j--){
			cout<<arr[j][i]<<"\t";
		}
		cout<<endl;
	}
	cout<<"#########.............ANTICLOCK ROTATION............########"<<endl;
	
	for(int i=3;i>=0;i--){
		for(int j=3;j>=0;j--){
			cout<<arr[j][i]<<"\t";
		}
		cout<<endl;
	}
	
	return 0;
}
