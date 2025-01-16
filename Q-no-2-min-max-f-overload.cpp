//Write a c++ program to find the maximum and minimum value using function overloading.

#include <iostream>
using namespace std;

int Min(int a, int b)
{
    if (a < b) 
	{
        return a;
    } 
	else 
	{
       return b;
    }
}

int Min(int a, int b, int c) 
{
    if (a < b && a < c) 
	{
       return a;
    } 
	else if (b < a && b < c) 
	{
      return b;
    } 
	else 
	{
       return c;
    }
}

int Max(int a, int b) 
{
    if (a > b) 
	{
        return a;
    } 
	else 
	{
        return b;
    }
}

int Max(int a, int b, int c) 
{
    if (a > b && a > c) 
	{
       return a;
    } 
	else if (b > a && b > c) 
	{
       return b ;
    } 
	else 
	{
        return c;
    }
}

int main() 
{
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    cout << " Minimum value is : " <<Min(num1, num2, num3) << endl;
    cout << "Maximum value is : " << Max(num1, num2, num3) << endl;
    return 0;
}

