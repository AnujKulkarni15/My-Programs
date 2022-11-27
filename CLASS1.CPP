#include<iostream>
using namespace std;
class A
{
	public:
	int a;
	void write_A()
	{
		cout<<"enter a number: ";
		cin>>a;
	}
	/* void display_A()
	{
		cout<<"value of a is : "<<a<<endl;
	} */
};
class B :public A
{
	int b,c;
	public:
	void write_B()
	{
		cout<<"enter a number: ";
		cin>>b;
	}
	/* void display_B()
	{
		cout<<"value of b is: "<<b<<endl;
	} */
	void sum()
	{
		c=a+b;
		cout<<"sum of two number is : "<<c; 
	}
};
int main()
{
	B d;
	d.write_A();
	d.write_B();
	d.sum();
	return 0;
}