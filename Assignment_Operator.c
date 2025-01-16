#include<stdio.h>
main()
{
	int a=5,c;
	c=a;
	printf("c=%d",c);
	c+=a;
	printf("c=%d",c);
	c-=a;
	printf("c=%d",c);
	c*=a;
	printf("c is %d",c);
	c/=a;
	printf("c is %d",c);
	c%=a;
	printf("c is %d",c);
	return 0;
}
