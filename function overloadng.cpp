
#include<iostream>
using namespace std;
float marks(float maths);
float marks(float maths,float science);
float marks(float maths,float science,float advMaths);
int marks(float maths,float science,float avdMaths,int evm);

float marks(float maths)
{
	cout<<"First function ";
	cout<<"Mark of maths: "<<maths;
}
float marks(float maths,float science)
{
	cout<<"Second function: "<<endl;
	cout<<"Mark of maths: "<<maths;
	cout<<"Mark of science: "<<science;
}
float marks(float maths,float science,float advMaths)
{
    cout<<"Third function: "<<endl;
	cout<<"Mark of maths: "<<maths;
	cout<<"Mark of science: "<<science;
	cout<<"Marks of adv.Maths: "<<advMaths;
}
int marks(float maths,float science,float advMaths,int evm)
{
	cout<<"Fourth function: "<<endl;
	cout<<"Mark of maths: "<<maths;
	cout<<"Mark of science: "<<science;
	cout<<"Mark of adv.Maths: "<<advMaths;
	cout<<"Mark of EVM: "<<evm;
}
main()
{
	marks(33.33);
	marks(33.33,44.44);
	marks(33.33,44.44,55.55);
	marks(33.33,44.44,55.55,66);
	
}
