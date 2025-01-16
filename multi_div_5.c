#include<stdio.h>
main()
{
	float num1,num2,multiplication,division;
	printf("Enter the first number: ");
	scanf("%f", &num1);
	printf("Enter the second number: ");
	scanf("%f", &num2);
	multiplication=num1*num2;
	division=num1/num2;
	printf("Multiplication: %f ", multiplication);
	printf("  ,Division: %f  ", division);
}
