#include<iostream>
using namespace std;
class Number
{
	public:
		int num1,num2,num3;
	void input()
	{
		cout<<"Enter three number : ";
		cin>>num1>>num2>>num3;
	}
		
	void display()
	{
		if(num1>num2 && num1>num3)
		{
			cout<<num1<<" is greater "<<endl;
		}
		else if (num2>num1 && num2>num3)
		{
			cout<<num2<<" is greater "<<endl;
		}
		else
		cout<<num3<<"is greater"<<endl;
		
	} 
};
main()
{
	Number n;
	n.input();
	n.display();
	return 0;
}
