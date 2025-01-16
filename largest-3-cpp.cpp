#include<iostream>
using namespace std;
class Largest
{
	private:
		int num1;
		int num2;
		int num3;
		public:
			int get_data()
			{
				cout<<"Enter three values:";
				cin>>num1>>num2>>num3;
			}
			int result()
			{
					if(num1>=num2 && num1>=num3)
		              {
		            	cout<<num1<<" is greater "<<endl;
		            }
		             else if (num2>=num1 && num2>=num3)
	            	{
		        	cout<<num2<<" is greater "<<endl;
		             }
		           else
	            	cout<<num3<<"is greater"<<endl;
			}
};
main()
{
	Largest obj;
	obj.get_data();
	obj.result();
}
