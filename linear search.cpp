#include<iostream>
using namespace std;
int search(int a[],int search_element,int size){
	for(int i=0;i<size;i++)
	if(a[i]==search_element)
	return i;
	return -1;
}
int main(){
	int a[]={2,3,4,5,6,7,8};
	int search_element=5;
	int size=sizeof(a)/sizeof(a[0]);
	int result=search(a,search_element,size);
	if(result==-1)
	cout<<"Element is not present";
	else
	cout<<"Element found at index:"<<result;
}
