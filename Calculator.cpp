#include <iostream>
#include <cstdlib>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
using namespace std;
double Add(double a,double b){
	double c;
	c=a+b;
	return c;
}
double Subtract(double a,double b){
	double c;
	c=a-b;
	return c;
}
double Multiply(double a,double b){
	double c;
	c=a*b;
	return c;
}
double Divide(double a,double b){
	double c;
	c=a/b;
	return c;
}
int main(){
	char f;
	
	while(true)
	{
	system ("cls");
	cout<<endl;
	cout<<"                             CALCULATOR        "<<endl;
	
	cout<<endl;
	cout<<endl;
	double a,b;
	char op;
	cout<<"  Enter first number: ";
	cin>>a;
	cout<<"  Enter second number: ";
	cin>>b;
	cout<<"  Enter operation to perform: ";
	cin>>op;
	cout<<endl;
	if(op=='+')
	{
		cout<<"  "<<a<<" "<<op<<" "<<b<<" = "<<Add(a,b)<<endl;
	}
	else if(op=='-')
	{
		cout<<"  "<<a<<" "<<op<<" "<<b<<" = "<<Subtract(a,b)<<endl;
	}
	else if(op=='*')
	{
		cout<<"  "<<a<<" "<<op<<" "<<b<<" = "<<Multiply(a,b)<<endl;
	}
	else if(op=='/')
	{
		cout<<"  "<<a<<" "<<op<<" "<<b<<" = "<<Divide(a,b)<<endl;
	}
	else
	{
		cout<<"  Wrong Operation!!!"<<endl;
	}
	cout<<endl;
	cout<<"  Wanna perform calculation again??? Y/N?  ";
	cin>>f;
	if(f=='N')
	{
		break;
	}
}
}
