// Operator overloading of ->
#include<iostream>
using namespace std;
class A
{
	public:
		int a;
		A()
		{
			a=3;
		}
		A* operator ->()
		{
			return this;
		}
	
};
int main()
{
	
	A obj;
    cout<<obj-> a;
}
