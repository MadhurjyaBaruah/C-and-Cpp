#include<iostream>
using namespace std;

float marks(float maths);
float marks(float maths,float science);
float marks(float maths,float science,float advMath);
int marks(int evm);


float marks()
{
	float marks;
	cout<<" marks is "<<marks;
}

float marks(float maths)
{
	cout<<endl;
	cout<<"Maths marks is: "<<maths;
}

float marks(float maths,float science)
{
	//float science;
	//float science=77.77;
	//cout<<endl;
	cout<<"Maths mark is :"<<maths;
	cout<<"Science mark is : "<<science;
}

float marks(float maths,float science,float avdMath)
{
	//float avdMath;
	//float avdMath=88.88;
	cout<<endl;
	cout<<"Maths mark is :"<<maths;
	cout<<"Science mark is : "<<science;
	cout<<"advMATH mark is :"<<avdMath;
}

//int marks()
//{  
//	int marks;
//	cout<<" marks: "<<marks;
	
//}

int marks(int evm)
{
	cout<<endl;
	cout<<"evm marks is: "<<evm;
	
}

main()
{
	marks();
	marks(56.6f);
	marks(56.66,77.77);
	marks(56.66,77.77,88.88);
    marks(33);
    marks(99);
}

