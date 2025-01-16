
#include <iostream>
using namespace std;

void double1(double a, double b) 
{
	double result;
    result= a + b;
    cout<<"sum of two number is: "<<result<<endl;
}

void double1(double a, double b,char) 
{
	double result;
    result= a - b;
    cout<<"subtraction of two number is: "<<result<<endl;
    
}

void double1(double a, double b,char,char) 
{
	double result;
    result= a * b;
    cout<<"Multiplication of two number is: "<<result<<endl;
}

void double1(double a, double b,char,char,char) 
{
	float result;
    result= a /b;
    cout<<"Division of two number is:  "<<result<<endl;
}


 int main() 
{
	double num1,num2;
	cout<<"Enter the two number:";
	cin>>num1>>num2;
	double1(num1,num2);
	double1(num1,num2,'-');
	double1(num1,num2,'*','*');
	double1(num1,num2,'/','/','/');

}

