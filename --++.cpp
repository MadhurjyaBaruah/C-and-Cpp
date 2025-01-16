#include <iostream>
using namespace std;
void opp(double a, double b){
 cout<<"ArithMatic operation"<<endl;
 cout<<"a+b = "<<a+b<<endl;
 cout<<"a-b = "<<a+b<<endl;
 cout<<"a*b = "<<a+b<<endl;
 for(int i =0; i<2 ; i++){
 if(b!=0){
 cout<<"a/b = "<<a/b<<endl;
 break;
 }
 else{
 cout<<"inavalid input"<<endl<<"Enter again : "<<endl;
 double c;
 cin>>c;
 b = c;
 cout<<"a/b ="<<a/b;
 break;

 }
 }
}
void opp(double a, double b, string oper){
 cout<<oper<<endl;
 cout<<"= :"<<" "<<(a =b)<<endl;
 cout<<"+= :"<<" "<<(a += b)<<endl;
 cout<<"-= :"<<" "<<(a -= b)<<endl;
 cout<<"*= :"<<" "<<(a *= b)<<endl;
}
void opp(double a, double b, string oper,string oper2){
 cout<<oper<<oper2<<endl;
 cout<<"a==b :"<<(a==b)<<endl;
 cout<<"a!=b :"<<(a!=b)<<endl;
 cout<<"a>b :"<<(a>b)<<endl;
 cout<<"a<b :"<<(a<b)<<endl;
 cout<<"a==b :"<<(a>=b)<<endl;
 cout<<"a==b :"<<(a<=b)<<endl;
}
void opp(double a){
 cout<<"Incriment :"<<a++<<endl;
 cout<<"Decriment :"<<a--<<endl;
}
int main() {
 cout<<"For arithmatic operation type : arith"<<endl;
 cout<<"For assingment type : assign "<<endl;
 cout <<"For comparisation type : compare"<<endl;
 cout <<"For Incriment and Decriment type : id"<<endl;
 std::string oper;
 double a;
 double b;
 cout<<"enter Operator :"<<" ";
 cin>>oper;
 cout<<"Enter two Numbers"<<endl;
 cin>>a>>b;
 if (oper == "arith"){
 opp(a,b);
 }
 else if(oper == "assign"){
 opp(a,b,"Assignment Operators :");
 }
 else if (oper == "compare"){
 opp(a,b,"Copaarisation", "Operator");

 }
 else if (oper =="id"){
 cout<<"Only for first Value"<<endl;
 opp(a);

 }
}
