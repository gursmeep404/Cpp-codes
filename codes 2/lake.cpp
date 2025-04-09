// virtual functions used to create polymorphism
#include<iostream>
using namespace std;
class A
{
	public:
		void display()
		{
			cout<<" I am display of base class"<<endl;
			
		}
	virtual	void show()
		{
			cout<<"I am show of base class"<<endl;
		}
};
class B : public A
{
	public:
		void display()
		{
			cout<<" I am display of derived class"<<endl;
			
		}
		void show()
		{
			cout<<"I am show of derived class"<<endl;
		}
};

int main()
{
	A obj1;
	A*ptr=&obj1;
	ptr-> display();
	ptr-> show();
	B obj2;
	ptr=&obj2;
		ptr-> display();
	ptr-> show();
	
}
