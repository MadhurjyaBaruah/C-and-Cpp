#include<iostream>
using namespace std;
class shape
{
	public:
		void display()
		{
			cout<<"This is a shape."<<endl;	
		}		
};

class triangle:	public shape
{
	public:
		void display1()
		{
			float b,h,area;
			cout<<"Enter the b and h: ";
			cin>>b>>h;
			area=0.5*b*h;
			cout<<"The area of triangle is "<<area<<endl;	
		}		
};
class rectangle:	public triangle
{
	public:
		void display2()
		{
			float l,b,area;
			cout<<"Enter the l and b: ";
			cin>>l>>b;
			area=l*b;
			cout<<"The area of rectangle is "<<area<<endl;	
		}		
};
class circle:	public rectangle
{
	public:
		void display3()
		{
			float r,area;
			cout<<"Enter value of r: ";
			cin>>r;
			area=3.14*r;
			cout<<"The area of circle is "<<area<<endl;	
		}		
};

int main()
{
	circle O;
	O.display();
	O.display1();
	O.display2();
	O.display3();
}
