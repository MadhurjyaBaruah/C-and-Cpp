#include<stdio.h>
main()
{
	int n,i,j,c;
	printf("Enter the range from 1 to n");
	scanf("%d", &n);
	printf("The prime numbers are:");
	for (i=2;i<=n;i++)
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
}
