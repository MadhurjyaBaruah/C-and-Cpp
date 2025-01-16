#include<iostream>
using namespace std;
int add();
int add(int x);
int add(int x,int y);
int add(int x,int y,int z);
float add(float x,float b);
float add(float a);

int add()
{
	int a1=10;
	cout<<"The result is :"<<a1<<endl;
}
int add(int x)
{
	int result ;
	result=x+x;
	cout<<"The result is:"<<result<<endl;
}
int add(int x , int y)
{
	int result=x+y;
	cout<<"The result is :"<<result<<endl;
}
int add(int x,int y,int z)
{
	int result;
	result=x+y+z;
	cout<<"The result is :"<<result<<endl;
}
float add (float x,float b)
{
	float result =x+b;
	cout<<"The result is :"<<result<<endl;
}
float add(float a)
{
	float result=a+a;
	cout<<"The result is :"<<result<<endl;
}

main()
{
	add();
	add(10);
	add(10,20);
	add(10,22,32);
	add(10.2,20);
	add(10);
}
