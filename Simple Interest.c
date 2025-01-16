#include<stdio.h>
main()
{
	
float P,r,t,SI;
printf("Enter principle amount:");
scanf("%f",&P);
printf("Enter rate of intrest:");
scanf("%f",&r);
printf("Enter time:");
scanf("%f",&t);
SI=(P+r+t)/100;
printf("Simple interest: %f",SI);
}
