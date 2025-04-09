// Virtual destructor
#include<iostream>
using namespace std;
class A
{
	public:
	virtual ~A()
	{
		cout<<"I am class A destructor";
	}
};
class B: public A
{
	public:
	~B()
	{
		cout<<"I am class B destructor"<<endl;
	}
	
};

int main()
{
	A*p=new B;
	delete p;
}
