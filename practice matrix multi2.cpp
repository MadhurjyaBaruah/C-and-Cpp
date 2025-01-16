#include<iostream>
using namespace std;
int main()
{
	int a[10][10],b[10][10],multi[10][10],r1,c1,r2,c2,i,j,k;
	cout<<"enter r n c for 1st matrix";
	cin>>r1>>c1;
	cout<<"enter r n c for 2nd matrix";
	cin>>r2>>c2;
	while(c1!=r2)
	{
		cout<<"Error";
		cout<<"enter r n c for 1st matrix";
	    cin>>r1>>c1;
	    cout<<"enter r n c for 2nd matrix";
	    cin>>r2>>c2;
	}
	cout<<"enter the elements for the first matrix "<<endl;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"enter the elements for the 2nd matrix ";
	for (int i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
	{
		cin>>b[i][j];
	}
	}
	
//multi
for (int i=0;i<r1;i++)
{
	for(j=0;j<c2;j++)
	{
		multi[i][j]=0;
	}
}

for (i=0;i<r1;i++)
for (j=0;j<c2;j++)
for (k=0;k<c1;k++)
{
	multi[i][j]+=a[i][k]*b[k][j];
}

cout<<"output "<<endl;
for (int i=0;i<r1;i++)
for (j=0;j<c2;j++)
{
	cout<<" "<<multi[i][j];
	if(j==c2-1)
	cout<<endl;
}
	
return 0;	
}
