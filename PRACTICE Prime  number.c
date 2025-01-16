#include<stdio.h>
int main()
{
	int num,i,j,count;
	printf("Enter limit : ");
	scanf("%d",&num);
	printf("Prime numbers are : ");
	for(i=1;i<=num;i++)
	{
		count=0;
		for(j=1;j<=num;j++)
		{
			if(i%j==0)
		  	count++;
		}
		if(count==2)
		printf("%d,",i);
		
	}
}
