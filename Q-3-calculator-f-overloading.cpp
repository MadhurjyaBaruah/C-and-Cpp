//c++ program to build a calculator using function overloading .
#include <iostream>
using namespace std;

float calculate(float num1, float num2, char c) 
{
    if (c == '+')
        return num1 + num2;
    else if (c == '-')
        return num1 - num2;
    else if (c == '*')
        return num1 * num2;
    else if(c == '/' && num2 )
       return num1 / num2;
    else 
	{
        cout << "Invalid operator ";
    }  
}

int main() 
{
    char c;
    float num1, num2;
    cout << "Enter operator (+, -, *, /): ";
    cin >> c;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
     
    cout<<"Result is : "<<calculate(num1,num2,c);
    return 0;
}

