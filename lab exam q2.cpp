#include<iostream>
using namespace std;

int main()
{
	int m1[10][10],m2[10][10],multi[10][10],r1,c1,r2,c2,i,j,k;
	
	cout<<"Enter rows and columns for 1st matrix: ";
	cin>>r1>>c1;
	cout<<"Enter rows and columns for 2nd matrix: ";
	cin>>r2>>c2;
	
	while(c1!=r2)
	{
		cout<<"Error! Column of first matrix not equal to row of 2nd. ";
		cout<<"Enter rows and columns for the first matrix: ";
		cin>>r1>>c1;
		
		cout<<"Enter rows and columns for the 2nd matrix: ";
		cin>>r2>>c2;
	}
	
	cout<<endl<<"Enter elements of 1st matrix:"<<endl;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			cin>>m1[i][j];
		}
	}
	
	 cout<<endl<<"Enter elements of 2nd matrix:"<<endl;
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			cin>>m2[i][j];
		}
	}
	
		for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			multi[i][j]=0;
		}
	}
	
		for(i=0;i<r1;i++)
		for(j=0;j<c2;j++)
		for(k=0;k<c1;k++)
		         {
		         	multi[i][j]+=m1[i][k]*m2
					 [k][j];
				 }
		
	
	cout<<endl<<"Outout of the Matrix: "<<endl;
	for(i=0;i<r1;i++)
	     for(j=0;j<c2;j++)
	    {
		cout<<" "<<multi[i][j];
		if(j==c2-1)
	       cout<<endl;
	}
	
	
}
	
	

