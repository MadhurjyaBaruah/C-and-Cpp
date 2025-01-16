#include<iostream>
using namespace std;
int binary_search(int a[],int search_element,int low,int high)
{
	while (low<=high)
	{
		int mid=low+(high-low)/2;
		if(a[mid]==search_element)
		return mid;
		if(a[mid]<search_element)
		low=mid+1;
		else
		high=mid-1;
	}
	return -1;
}

int main()
{
	int a[]={3,4,5,6,7,8,9};
	int search_element=4;
	int size=sizeof(a)/sizeof(a[0]);
	int result=binary_search(a,search_element,0,size-1);
	if (result== -1)
	cout<<"not found";
	else
	cout<<"found "<<result;
}
