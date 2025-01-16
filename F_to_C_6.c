#include<stdio.h>
main()
{
    float F,C;
	printf("Enter temperature in Fahrenheit: ");
	scanf("%f", &F);
	C=(5.0/9.0)*(F-32.0);
	printf("Temperature in Celsius: %f",C);
//	return 0;
}
