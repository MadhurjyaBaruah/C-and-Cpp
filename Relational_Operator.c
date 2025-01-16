#include<stdio.h>
main()
{
	int a=5,b=5,c=10;
	printf("%d==%d is %d,   ",a,b,a==b);
	printf("%d==%d is %d,   ",a,c,a==c);
	printf("%d>%d is %d,  ",a,b,a>b);
 	printf("%d<%d is %d,  ",a,c,a<c);
	printf("%d!=%d is %d,  ",a,c,a!=c);
	printf("%d<=%d is %d,  ",a,b,a<=b);
	printf("%d>=%d is %d,   ",a,b,a>=b);
	//return 0;
}
