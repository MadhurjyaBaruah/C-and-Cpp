#include<stdio.h>
int main()
{
	int n,i,j,c=0;
	printf("Enter limit: ");
	scanf("%d",&n);
	printf("prime numbers are :");
	for(i=1;i<=n;i++)
	{
		c=0;
		for(j=1;j<=n;j++)
		{
			if(i%j==0)
			c++;
		}
		if(c==2)
		printf("%d,",i);
	}
	return 0;
}
