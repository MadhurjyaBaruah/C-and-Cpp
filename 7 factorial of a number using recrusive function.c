#include<stdio.h>
int fact (int n);
main ()
{
	int n;
	printf("Enter the number :");
	scanf("%d",&n);
    printf ("the facr of %d is %d",n,fact (n));
}
int fact (int n)
{
	if (n>=1)
	return  n  * fact (n-1 );
	else 
	return 1 ;
}
