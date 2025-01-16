#include<stdio.h>
int main()
{
	int q,n,sum=0,r;
	printf("Enter any number :");
	scanf("%d",&n);
	q=n;
	//rev=0;
	while(q>0)
	{
		r=q%10;
		sum=sum+r;
	//	rev=rev*10+r;
		q=q/10;
		
	}
	printf("sum of the number is %d", sum);
}
