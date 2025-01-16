#include<stdio.h>
main()
{
	int x,y,z,result;
    printf("Enter value for x : ");
    scanf("%d",&x);
    printf("Enter value for y : ");
    scanf("%d",&y);
    printf("Enter value for z : ");
    scanf("%d",&z);
    result=4*x*x*x*x+3*y*y*y+9*z+6*z;
    printf("Result is : %d",result);
    
}
