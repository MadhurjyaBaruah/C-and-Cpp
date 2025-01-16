#include<iostream>
using namespace std;
class area{
	private:
		double base,height,result;
	public:
		area(double bs,double heig){
		base=bs;
		height=heig;
	}
	double show(){
		result=0.5*base*height;
		cout<<"The result of area of triangle is :"<<result<<endl;
	}
};
main(){
	double b,h;
	cout<<"enter the values for b and h:";
	cin>>b>>h;
	area m(b,h);
	m.show();
}
