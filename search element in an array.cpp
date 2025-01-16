#include<iostream>
using namespace std;
int main (){
	int arr[5]={1,2,3,4,5};
	int se=3;
	for(int i=0;i<5;i++){
		if(arr[i]==se)
		cout<<"Element found"<<endl;
		else 
		cout<<"Element not found"<<endl;
	}
	return 0;
}
