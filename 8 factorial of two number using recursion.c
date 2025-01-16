#include<stdio.h>
int gcd (int a, int b);
main()
{
	int a,b;
	printf("Enter the two number :");
	scanf("%d%d",&a,&b);
	printf("The GCD of %d & %d is %d",a,b,gcd(a,b));
}
int gcd (int a, int b)
{
	if (b!=0)
	return gcd(b,a %b);
	else 
	return a;
	 
}
