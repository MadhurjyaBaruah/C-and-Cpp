#include<iostream>
using namespace std;
class wall
{
	private:
		double length;
		double height;
		double result;
	public:
	    wall(double len,double heig){
			length=len;
			height=heig;
		}
		double show(){
			result=length*height;
			cout<<"The result is :"<<result <<endl;
		}
};
main()
{
    wall w1(11.23,34.3);
	wall w2(3.4,4.5);
	w1.show();
	w2.show();
	return 0;
}
