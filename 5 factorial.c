#include<stdio.h>
main()
{
	int i,n,fact;
	printf("Enter the number:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	fact=fact*i;
	printf("Result is %d ", fact);
	return 0;
	
}
