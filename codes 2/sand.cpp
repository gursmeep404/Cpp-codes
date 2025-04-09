// constructors in derived class
// multiple inheritance example
#include<iostream>
using namespace std;
class alpha
{
	int a;
	public:
		alpha(int x)
		{
			a=x;
			cout<<"alpha initialised"<<endl;
		}
	int	show_a()
		{
			return a;
		}
};

class beta
{
	int b;
	public:
		beta(int x)
		{
			b=x;
			cout<<"beta initialised"<<endl;
		}
		int	show_b()
		{
			return b;
		}
};

class gamma: public alpha, public beta
{
	int c,d;
	public:
		gamma(int p, int y, int z, int r):
			alpha(p),beta(y)
			{
				c=z;
				d=r;
				cout<<"gamma initialsied"<<endl;
			}
			void display()
			{
				cout<<"a="<<show_a()<<endl;
				cout<<"b="<<show_b()<<endl;
				cout<<"c="<<c<<endl<<"d="<<d<<endl;
			}
};

int main()
{
	gamma obj(1,2,3,4);
	obj.display();
}
