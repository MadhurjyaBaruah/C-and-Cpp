#include<iostream>
using namespace std;
int main(){
	int aSize;
	cout<<"Enter the size of the array : ";
	cin>>aSize;
	int a[aSize];
	cout<<"Enter the values :"<<endl;
	for(int i=0;i<aSize;i++)
	cin>>a[i];

int sc;
cout<<"Enter the element:"<<endl;
cin>>sc;
//int i;
for (int i=0;i<aSize;i++){
	if (a[i]==sc){
		cout<<"Element is found."<<endl;
		//break;
		return 0;
	}
	//break;
}
 //if (a[i]==sc){
	cout<<"element is not found"<<endl;
     
//}

return 0;
}
