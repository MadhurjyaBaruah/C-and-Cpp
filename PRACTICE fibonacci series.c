#include <stdio.h>
int main()
{
	int a=0,b=1,c,n,i;
	printf("Enter the limit : ");
	scanf("%d",&n);
	printf("Fibonacci series are %d,%d",a,b);
	for(i=2;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d,",c);
	}
return 0;
}
