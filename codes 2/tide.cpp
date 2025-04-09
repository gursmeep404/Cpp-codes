//pointers to functions(member functions and normal functions)
#include<iostream>
using namespace std;
/*class A
{
	int a;
	public:
	
		void display(int x)
		{
			cout<<x<<endl;
			cout<<"Hey you called";
		}
};*/
		void display(int x)
		{
			cout<<x<<endl;
			cout<<"Hey you called";
		}
int main()
{
	//A obj;
	//void (A::*p)(int x)=& A::display;
	//(obj.*p)(9);
	void(*p)(int x)=&display;
	(*p)(3);
}
