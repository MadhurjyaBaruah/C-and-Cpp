#include<iostream>
using namespace std;
class Person{
	private:
		int age;
	public:
		Person(){
			age=20;
		}
		Person(int a){
			age=a;
		}
		int getAge(){
			return age;
		}
};
int main(){
	Person Person1,Person2(45);
	cout<<"person1 age = "<<Person1.getAge()<<endl;
	cout<<"Person2 age = "<<Person2.getAge()<<endl;
	return 0;
}
