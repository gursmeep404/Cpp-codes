// swaping data of two class objects using friend function
#include<iostream>
using namespace std;
class B;
class A 
{
	int a;
	public:
		void getdata(int x)
		{
			a=x;
		}
		friend void swap(A& x, B& y);
};

class B 
{
	int a;
	public:
		void getdata(int x)
		{
			a=x;
		}
		friend void swap(A& x, B& y);
};

void swap(A& x, B& y)
{
	int c;
 c=y.a;
 y.a=x.a;
 x.a=c;
 cout<<"Values after swap are"<< x.a<<"and"<<y.a<<endl; 
   	
			}

int main()
{
	A obj1;
	B obj2;
	obj1.getdata(100);
	obj2.getdata(200);
	swap(obj1, obj2);
}
