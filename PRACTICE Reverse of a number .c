#include<stdio.h>
int main()
{
	int q,n,rev,r;
	printf("Enter any number : ");
	scanf("%d",&n);
	//printf("Reversed number is : ");
	q=n;
	rev=0;
	while(q>0)
	{
		r=q%10;
		rev=rev*10+r;
		q=q/10;
		
	}
	printf("Reversed number is %d", rev);
	
}
