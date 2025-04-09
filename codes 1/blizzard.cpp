//Overloading of binary operators using member function
#include<iostream>
 using namespace std;
class complex
{
	float real, imag;
	public:
		complex()
		{
		}
		complex(float x, float y)
		{
			real = x;
			imag = y;
		}
		complex operator+(complex c2)
		{
			/*complex c3;
			c3.real=real+c2.real;
			c3.imag=imag+c2.imag;
			return c3;*/
			return complex((real+c2.real),(imag+c2.imag));
		}
		void display()
		{
			cout<<real<<" + j"<<imag<<endl;
		}
		
};
int main()
{
	complex c1(2.5,3.5);
	complex c2(1.6,2.7);
	complex c3;
	c3=c1+c2;
	cout<<"c1 =";
	c1.display();
	cout<<"c2 =";
	c2.display();
	cout<<"c3 =";
	c3.display();
} 

//Overloading of binary operators using friend function
/*class complex
{
	float real, imag;
	public:
		complex()
		{
		}
		complex(float x, float  y)
		{
			real = x;
			imag = y;
		}
	void display()
		{
			cout<<real<<" + j"<<imag<<endl;
		}
		
		friend complex operator+(complex c1, complex c2);
};

complex operator+(complex c1, complex c2)
{
	return complex((c1.real + c2.real),(c1.imag + c2.imag));
}

int main()
{
	complex c1(2.5,3.5);
	complex c2(1.6,2.7);
	complex c3;
	c3=c1+c2;
	cout<<"c1 =";
	c1.display();
	cout<<"c2 =";
	c2.display();
	cout<<"c3 =";
	c3.display();

}*/
