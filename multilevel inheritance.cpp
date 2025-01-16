#include<iostream>
using namespace std;
class A{
	public :
		int x;
		void getx(){
			cout<<"Enter value of x : ";
			cin>>x;
		}		
};
class B{
	public:
		int y;
		void gety(){
			cout<<"Enter value of y : ";
			cin>>y;
		}
};
class c :public A,public B{
	public:
		void sum(){
			cout<<"sum="<<x+y;
		}
};
int main(){
	c obj;
	obj.getx();
	obj.gety();
	obj.sum();
	return 0;
}
