#include<stdio.h>
struct str
{
	char name[20];
	int roll;
	int age;
	float marks;
};
 main()
{
	struct str var1={"Ram",10,20,79.5};
	struct str var2={"Rahul",21,22,91.23};
	
	printf("Student 1 details\n");
	printf("Name : %c\n ",var1.name);
	printf("Roll : %d \n",var1.roll);
	printf("Age : %d \n",var1.age );
	printf("Marks : %f\n ",var1.marks);
	
	printf("Student 2 Details ");
    printf("Name : %c ",var2.name);
	printf("Roll : %d ",var2.roll);
	printf("Age : %d ",var2.age );
	printf("Marks : %f ",var2.marks);
	return 0;
}

