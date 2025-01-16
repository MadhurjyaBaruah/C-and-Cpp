#include<iostream>
using namespace std;
main()
{
	int m1[3][3];
	int m2[3][3];
	int c[3][3];
	int d[3][3];
	cout<<"enter the value for first matrix :";
	for(int i=0;i<3;i++)
	{
		 for(int j=0;j<3;j++)
		{
			cin>>m1[i][j];
		}
    }
	cout<<"enter the value for second matrix :";
	for(int i=0;i<3;i++)
	{
	     for(int j=0;j<3;j++)
		{
			cin>>m2[i][j];
		}
	}
	
	//addition
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			c[i][j]=m1[i][j]+m2[i][j];
		}
	}
	//display addition
	cout<<"the sum of the two matrix :"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<c[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	//suntraction
		for(int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			d[i][j]=m1[i][j]-m2[i][j];
		}
	}
	//display subtraction
	cout<<"the sub of the two matrix :"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<d[i][j]<<"\t";
		}
		cout<<endl;
	}
	
}
