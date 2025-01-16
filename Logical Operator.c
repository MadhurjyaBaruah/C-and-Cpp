#include<stdio.h>
int main()
{
	int a=5,b=5,c=10,result;
	result=(a==b)&&(c>b);
	printf("Result of 1st expression is %d\n",result);
	result=(a==b)&&(c<b);
	printf("Result of 2nd expression is %d\n",result);
	result=((a==b)||(c<b));
	printf("Result of 3rd expression is %d\n",result);
	result=!(a==b);
	printf("Result of 4th expression is %d\n", result);
	return 0;
}
