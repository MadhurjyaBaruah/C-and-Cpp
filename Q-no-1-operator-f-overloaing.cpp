//Write a c++ program to implement function overloading by taking the concept of operators.

#include <iostream>
using namespace std;

void maths(float a, float b) 
{
	double result;
    result= a + b;
    cout<<"Addition of two number is: "<<result<<endl;
}

void maths(float a, float b,char) 
{
	float result;
    result= a - b;
    cout<<"subtraction of two number is: "<<result<<endl;
    
}

void maths(float a, float b,char,char) 
{
	float result;
    result= a * b;
    cout<<"Multiplication of two number is: "<<result<<endl;
}

void maths(float a, float b,char,char,char) 
{
	float result;
    result= a /b;
    cout<<"Division of two number is:  "<<result<<endl;
}


 int main() 
{
	float num1,num2;
	cout<<"Enter the two number:";
	cin>>num1>>num2;
	maths(num1,num2);
	maths(num1,num2,'-');
	maths(num1,num2,'*','*');
	maths(num1,num2,'/','/','/');
    return 0;
}

