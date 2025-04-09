// Overloading unary operator using member function
#include<iostream>
using namespace std;
/*class A
{
	int a,b;
	public:
		A()
		{
			
		}
		A(int x, int y)
		{
			a=x;
			b=y;
		}
		A operator - ()
		{
			A obj3;
		    obj3.a=-a;
		   obj3.b= -b;
		   return obj3;
			
		}
		void display()
		{
			cout<<a<<endl<<b;
		}
		
	
};

int main()
{
	A obj1(2,3);
	A obj2;
	obj2= -obj1;
	obj2.display();
	
}*/
//We can also write operator function with void returntype;

// overloading unary operator using friend function

class A
{
	int a,b;
	public:
		A(int x, int y)
		{
			a=x;
			b=y;
		}
			void display()
		{
			cout<<a<<endl<<b;
		}
		friend void operator-(A& x);
};

void operator-(A& x)
{
	x.a=-x.a;
	x.b=-x.b;
	
}
int main()
{
	A obj1(3,-8);
	-obj1;
	obj1.display();
}
