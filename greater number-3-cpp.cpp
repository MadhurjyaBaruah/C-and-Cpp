#include<iostream>
using namespace std;
class Number
{
	public:
		int num1,num2;
	void input()
	{
		cout<<"Enter three number : ";
		cin>>num1>>num2;
	}
		
	void display()
	{
		if(num1>num2)
		{
			cout<<num1<<" is greater than "<<num2<<endl;
		}
		else if (num2>num1)
		{
			cout<<num2<<" is greater than "<<num1<<endl;
		}
		else
		cout<<"Both numbers are equal."<<endl;
		
	} 
};
main()
{
	Number n;
	n.input();
	n.display();
	return 0;
}
