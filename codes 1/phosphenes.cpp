//overloading subscript operator
#include<iostream>
using namespace std;
class A
{
	int a[5];
	public:
		A(int*p)
		{
			for(int i=0;i<5;i++)
			{
				a[i]=*(p+i);
			}
		}
	int operator[](int x)
		{
			return a[x];
			
			}
		
};
	
int main()
{
	int x[5]={1,2,3,4,5};
	A obj(x);
	
	for(int i=0;i<5;i++)
	{
		int y;
	y=obj[i];
		
		cout<< y;
	}
	
	
	
}
