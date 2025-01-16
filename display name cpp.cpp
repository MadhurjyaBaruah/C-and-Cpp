#include<iostream>
using namespace std;
class Details
{
	public:
		string name;
		string address;
		int roll_no;
		
		void input()
		{
			cout<<"Enter your name: ";
			cin>>name;
			cout<<"Enter your address: ";
			cin>>address;
			cout<<"enter your roll number : ";
			cin>>roll_no;
		}
		void display()
		{
			cout<<"Name is : "<<name<<endl;
			cout<<"Address is: "<<address<<endl;
			cout<<"Roll number :"<<roll_no<<endl;
		}
};
main()
{
	Details D;
	D.input();
	D.display();
	return 0;
}

