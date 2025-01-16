#include<stdio.h>
int main()
{
	int i,j,row=5;
	for(i=0;i<row;i++)
  {
	for(j=0;j<i;j++)
	{	
		printf("");
	}
		for(j=i;j<row;j++)
		{
		printf("* ");
	    }

	printf("\n");
  }
	
}
