#include<iostream>
using namespace std;
class Avg
{
		public:
			float avg_, num1,num2;
			
			void input()
			{
				cout<<"Enter two numbers:";
				cin>>num1>>num2;
				
			}
			void display()
			{
			   avg_=(num1+num2)/2.0;
			   cout<<"average is: "<<avg_;
	    	}
	
};
int main()
{
	Avg A;
	A.input();
	A.display();
	return 0;
}
