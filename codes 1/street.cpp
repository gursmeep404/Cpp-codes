//Addition of two complex numbers
#include<iostream>
using namespace std;
class complex
{
	float real,imag;
	public:
		complex()
		{
		}
	complex(float x,float y)
	{
		real=x;
		imag=y;
	
	}
	complex(double x=2.7,float y= 1.6)
	{
		real=x;
		imag=y;
		
	}

	friend void sum(complex p, complex q);
	
	void display()
	{
		cout<<real<<"+j"<<imag<<endl;
	}
	

};
void sum(complex p, complex q)
	{
		float real,imag;
	real= p.real+q.real;
		imag=p.imag+q.imag;
	//	return d;
	cout<<"C="<<real<<"+j"<<imag<<endl;
	}

int main()
{
	complex a(2.7,3.5);
	complex b(1.6);
	//complex c;
	sum(a,b);
	cout<<"A=";
	a.display();
    cout<<"B=";
    b.display();
    //	cout<<"C=";
	//c.display();
}


