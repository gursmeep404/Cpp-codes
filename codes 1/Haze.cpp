#include<iostream>
using namespace std;
class test
{
	int *i;
	public:
		test(int a)
		{
			i=new int[a];
			cout<<"Constructor message: Integer array of size "<<a<<"created"<<endl;
		}
		~test()
		{
			delete i;
			cout<<"Destructor message: Freed up the memory allocated for integer array"<<endl;
		}
	
};
int main()
{
	int a;
	cout<<"Enter the size of the array"<<endl;
	cin>>a;
	cout<<"Creating an object of test class"<<endl;
	test obj(a);
	
	
}



