// mean of two numbers using friend function
#include<iostream>
using namespace std;
class A
{
	float a,b;
	public:
		void getdata(float x,float y)
		{
			a=x;
			b=y;
		}
		friend void mean(A& x);
};
void mean(A& x)
{
	float mean;
	mean= (x.a + x.b)/2;
	cout<<mean;
}

int main()
{
	A obj;
	obj.getdata(25,40);
	mean(obj);
}
