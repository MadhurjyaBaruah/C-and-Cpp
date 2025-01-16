#include<stdio.h>
int main()
{
	int n,i,j,c=0;
	printf("Enter any number:");
	scanf("%d",&n);
	for (i=2;i<=n;i++)
	{
		c=0;
		for (j=1;j<=n;j++)
		{
		if (i%j==0)
		c++;
     	}
	}
	if(c==2)
	printf("Prime number");
	else
	printf("not a prime number");
	return 0;
}
