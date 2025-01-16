#include<iostream>
using namespace std;
int lsearch(int a[],int se,int size)
{
	for(int i=0;i<size;i++)
	if (a[i]==se)
	return i;
	return -1;
	
}

int main()
{
	int a[]={1,2,3,4,5,6,7,8,9};
	int se=4;
	int size=sizeof(a)/sizeof(a[0]);
	int result=lsearch(a,se,size);
	if (result==-1)
	cout<<"not found";
	else
	cout<<"found "<< result;
}
