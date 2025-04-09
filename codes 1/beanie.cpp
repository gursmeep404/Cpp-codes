// use parametrised constructors to initialsie data members and then display value using member function
#include<iostream>
using namespace std;
class A
{
	int a,b;
	public:
		A()
		{
			
		}
		A(int x,int y)
		{
			a=x;
			b=y;
		}
		void display();
};

void A::display()
{
	cout<<"("<<a<<","<<b<<")"<<endl;

	
}
int main()
{
	A obj1(2,5);
	A obj2(3,4);
   cout<< "point p1=";
   obj1.display();
	cout << "point p2=" ;
 obj2.display();
}

