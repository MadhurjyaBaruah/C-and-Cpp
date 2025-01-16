#include<stdio.h>
int main()
{
	int i,num,fact;
	printf("enter a number : ");
	
	scanf("%d",&num);

	for(i=1;i<=num;i++)
	{
		fact *=i;

	}
	printf("Result is %d",fact);
}
