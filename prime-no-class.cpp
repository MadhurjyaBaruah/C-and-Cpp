#include<iostream>
using namespace std;
class Prime
{
	int a,c;
    public:
    	void input()
    	{
    		cout<<"Enter any number:";
    		cin>>a;
		}
		void output()
		{
			//c=0;
			for(int i=1;i<=a;i++)
			{
				if(a%i==0)
				{
					c++;
				}
			}
			if(c==2)
			cout<<"prime number";
			else
			cout<<"not prime number";
		}
};
int main()
{
	Prime P;
	P.input();
	P.output();
return 0;
}
	

