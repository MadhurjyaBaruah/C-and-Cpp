#include<stdio.h>
main()
{
	int i,n1,n2,num;
	printf("Enter number 1 and 2 : ");
	scanf("%d%d",&n1,&n2);
	for(i=1; i<=n1&&i<=n2;i++)
	{
		if (n1%i==0&&n2%i==0);
		num=i;
	}
	printf("%d",num);
}
