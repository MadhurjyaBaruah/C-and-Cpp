#include <stdio.h>
int main()
{
	int i,j,row=6;
	for(i=1;i<row;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
	
}
