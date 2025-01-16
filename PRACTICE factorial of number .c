#include<stdio.h>
int main()
{
	int n, fact=1 ;
	printf("Enter the number: ");
	scanf("%d",&n);
    int i=1;
    while (i<=n)
	{
		fact=fact*i;
	//	printf("Result is %d", fact);
		i++;
	}
	printf("Result is %d", fact);
}
