#include<iostream>
using namespace std;
main()
{
	int a[3][3]={{3,2,3},{8,4,5},{8,2,5}};
	int b[3][3]={{7,6,9},{1,7,3},{5,4,2}};
	int c[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	cout<<"The result of addition of matrix: ";
	cout<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<c[i][j]<<"\t";
		}
		cout<<endl;
	}
}
