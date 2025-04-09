//multiple inheritance
#include<iostream>
using namespace std;
/*class A
{
     int a;
	public:
		void put_a();
	int get_a();
};
	void A:: put_a()
	{
		a=10;
	}
int A::get_a()
{
	return a;
}
class B
{
	int b;
	public:
		void put_b();
	int	get_b();
};
void B::put_b()
{
	b=20;
}
int B::get_b()
{return b;
}
class C: public A, public B
{
	int c;
	public:
		void mul();
		void display();
};
void C::mul()
{
	put_a();
	put_b();
	c=get_a()*get_b();
	
}
void C:: display()
{
	cout<<"a="<<get_a()<<endl;
	cout<<"b="<<get_b()<<endl;
	cout<<"a*b="<<c;
}
int main()
{
	C obj;
	obj.mul();
	obj.display();
}*/


class A
{
	protected:
     int a;
	public:
		void put_a();
	
};
	void A:: put_a()
	{
		a=10;
	}

class B
{
	protected:
	int b;
	public:
		void put_b();
	
};
void B::put_b()
{
	b=20;
}

class C: public A, public B
{
	int c;
	public:
		void mul();
		void display();
};
void C::mul()
{
	put_a();
	put_b();
	c=a*b;
	
}
void C:: display()
{
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	cout<<"a*b="<<c;
}
int main()
{
	C obj;
	obj.mul();
	obj.display();
}
