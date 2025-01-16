#include<iostream>
using namespace std;
int per(){
	int m,s;
	cout <<"Enter marks of m and s:";
	cin>>m>>s;
	float p;
	p=(m+s)/2;
	cout<<"p is :"<<p<<endl;
}
int per(int maths)
{
	int sc=50;
	float p=(maths+sc)/2;
	cout<<"p is :"<<p<<endl;
}
int per(int maths , int sc)
{
	float p;
	p=(maths+sc)/2;
	cout<<"p is :"<<p<<endl;
}
main()
{
	per();
	per(70);
	per(50,60);
	
}


