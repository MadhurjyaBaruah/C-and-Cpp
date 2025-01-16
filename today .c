#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the first value:");
	scanf("%d", &a);
	printf("Enter the second value:");
	scanf("%d", &b);
	printf("++a is %d",++a);
	printf("++b is %d",++b);
	printf("--b is %d",--b);
	printf("--a is %d",--a);
	c=a+b;
	printf("addition of two number is=%d",c);
	c=a-b;
	printf("subtraction of two number is=%d",c);
	c=a*b;
	printf("Multiplication of two number is=%d",c);
	c=a/b;
	printf("Division of two number is=%d",c);
	c=a%b;
	printf("reminder is=%d",c);
	
	
	
}



