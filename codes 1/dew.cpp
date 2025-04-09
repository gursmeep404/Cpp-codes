//adding data of two objects of different class using friend function
#include<iostream>
using namespace std;
class B;
class A
{
	int data;
	public:
		void getdata(int x)
		{
			data=x;
		}
		friend void add(A x, B y);
};

class B
{
	int data;
	public:
		void getdata(int x)
		{
			data=x;
		}
		friend void add(A x, B y);
};

void add(A x, B y)
{
	int c;
	c=x.data+y.data;
	cout<<c;
}

int main()
{
	A obj1;
	B obj2;
	obj1.getdata(5);
	obj2.getdata(50);
	add(obj1,obj2);
	
}
