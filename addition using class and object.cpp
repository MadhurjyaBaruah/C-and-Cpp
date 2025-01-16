#include<iostream>
using namespace std;
class Add{
	public:
		int num1,num2,result;
	void read(){
		cout<<"Enter the first number: ";
		cin>>num1;
		cout<<"Enter second number : ";
		cin>>num2;
	}
//};
void sum(){
	result=num1+num2;
}
void print(){
	cout<<"Result: "<<num1<<'+'<<num2<<"="<<result<<endl;
}
};
main(){
	Add o1,o2;
	cout<<"Object one "<<endl;
	o1.read();
	o1.sum();
	o1.print();
	cout<<"Object two "<<endl;
	o2.read();
	o2.sum();
	o2.print();
}
