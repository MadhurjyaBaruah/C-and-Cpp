#include<iostream>
using namespace std;

class Shape
{
	public:
		void display1()
		{
			cout<<"Class Shape Created";
		}
};

class Triangle:public Shape
{
	public:
		void display2()
		{
			cout<<"This is a Trianle";
		}
};

class Rectangle:public Shape
{
	public:
		void display3()
		{
			cout<<"This is a Rectangle";
		}
};

class Circle:public Shape
{
	public:
		void display4()
		{
			cout<<"This is a Circle";
		}
};

class Pyramid:public Triangle
{
	public:
		void displayA(float b, float height)
		{
			cout<<"The area of a Pyramid is ";
			float resultA=0.5*b*height;
			cout<<"Result is "<<resultA;
		}
};

class Right_angle:public Triangle
{
	public:
		void displayB(float base, float height)
		{
			cout<<"The area of a  Right_angle is "<<0.5*base*height;
		}
};

class Parallelogram:public Rectangle
{
	public:
		void displayC(float base, float height)
		{
			cout<<"The atea of a Parallelogram is "<<base*height;
		}
};

class Square:public Rectangle
{
	public:
		void displayD(float side)
		{
			cout<<"The area of a Square is "<<side*side;
		}
};

class Semi_circle:public Rectangle
{
	public:
		void displayE(float r)
		{
			cout<<"The area of a Semi_circle is "<<0.5*3.14*r*r;
		}
};

class Full_circle:public Rectangle
{
	public:
		void displayF(float r)
		{
			cout<<"The area of a Full_circle is "<<3.14*r*r;
		}
};

 main()
{
	float num1,num2;
	cout<<"Enter the two number ";
	cin>>num1>>num2;
	
	//displayA(num1,num2);
//	displayB(num1,num2);
//	displayC(num1,num2);
//  displayD(num1);
//	displayE(num1);
//	displayF(num1);
	
	Triangle obj;
	obj.display1();
	obj.display2();
	Pyramid p;
	p.displayA(num1,num2);
	Triangle T;
	T.display2();
	Rectangle R;
	R.display3();
	Circle C;
	C.display4();
	return 0;
	

}


