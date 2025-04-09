//overloading of assignment operator
#include<iostream>
using namespace std;
class A 
{
	int a;
	public:
		A()
		{
		
		}
		A(int x)
		{
			a=x;
		}
		void display()
		{
			cout<<a;
		}
		void operator=(A& s1)
		{
			a=s1.a;
		}
	//	friend void operator=(A s2, A s1);
		
};

/*friend void operator=(A s2, A s1)
{
	s2.a=s1.a;
}*/

/*class B
{
	int a;
	public:
		B(int x)
		{
			a=x;
		}
		void display()
		{
			cout<<a;
		}
};*/
int main()
{
	A s1(5);
	A s2(6);
	s1.display();
	s2.display();
	s2=s1;
	s2.display();
}
