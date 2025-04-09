// link of pointers to base class and derived class
#include<iostream>
using namespace std;
class A
{
	
	public:
		int a;

		void show()
		{
			cout<<"a="<<a<<endl;
		}
};

class B: public A
{
	public:
		int b;
	
		void show()
		{
			cout<<"a="<<a<<endl<<"b="<<b<<endl;
		}
		
};

int main()
{
	A obj1;
	B obj2;
	A* p= & obj1;
	p->a=3;
	(*p).show();
	p=&obj2;
	p->a=4;
//	p->b=5; cant access original members of B
    p->show(); // show of A is accessed
}
