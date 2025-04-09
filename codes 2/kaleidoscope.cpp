//catch and throw mechanism....throw point inside and outside try block
/*#include<iostream>
using namespace std;

void fun(int x,int y)
{
	if(x==0)
		{
			throw x;
		}
		else
		{
			int d;
			d=y/x;
			cout<<d;
		}
}
int main()
{
	int x,y;
	x=0;
	y=3;
/*	try
	{
		if(x==0)
		{
			throw x;
		}
		else
		{
			int d;
			d=y/x;
			cout<<d;
		}
	}*/
	/*try
	{
		fun(x,y);
	}
	
	catch(int i)
	{
		cout<<"caught an exception";
	}
}*/


//catch class type exceptions
#include<iostream>
using namespace std;
class A
{

	public:
			int x,y;
		A()
		{
			x=5;
			y=8;
		}
};
int main()
{
	A obj;
	try
	{
		throw obj;
	}
	catch(A c)
	{
		cout<<"caught an object"<<c.x<<c.y;
	}
}
