//single inheritance public and private
#include<iostream>
using namespace std;
/*class A
{
	
		int a;
		public:
			int b;
			void getdata();
		
			int access_a();
		
};

void A::getdata()
{
	a=5;
	b=10;
}

int A::access_a()
{
	return a;
}
class B: public A
{
	int c;
	public:
		void putdata();
		void display();
};
void B:: putdata()
{
	c=access_a()*b;
}
void B:: display()
{
	cout<< "a="<<access_a()<<endl;
	cout<<"b="<<b<<endl;
	cout<<"c="<<c<<endl;
}

int main()
{
	B obj;
	obj.getdata();
	obj.putdata();
	obj.display();
}*/

class A
{
	
		int a;
		public:
			int b;
			void getdata();
		
			int access_a();
		
};

void A::getdata()
{
	a=5;
	b=10;
}

int A::access_a()
{
	return a;
}
class B: private A
{
	int c;
	public:
		
		void putdata();
		void display();
};

void B:: putdata()
{
	getdata();
	c=access_a()*b;
}
void B:: display()
{
	cout<< "a="<<access_a()<<endl;
	cout<<"b="<<b<<endl;
	cout<<"c="<<c<<endl;
}

int main()
{
	B obj;

	obj.putdata();
	obj.display();
}
