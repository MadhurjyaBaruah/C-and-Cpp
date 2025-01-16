#include<stdio.h>
int main()
{
	int n,q,r,rev;
	printf("Enter an integer number : ");
	scanf("%d",&n);
	q=n;
	rev=0;
	while (q>0)
	{
		r=q%10;
		rev=rev*10+r;
		q=q/10;
	}
	printf("reverse number is %d ",rev);
	return 0; 
}
