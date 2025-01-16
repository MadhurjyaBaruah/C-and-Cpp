#include<iostream>
using namespace std;
class Area{
	private:
		double b;
		double h;
		double result;
	public:
		Area(){
			cout<<"Enter the base of triangle: "<<endl;
			cin>>b;
			cout<<"Enter the height of triangle: "<<endl;
			cin>>h;
			result=0.5*b*h;
			cout<<"Area of a trianglre is :"<<result<<endl;
		}
};
main()
{
	Area A;
	return 0;
}
