// Add values of data members of an object using pointers
#include<iostream>
using namespace std;
class A
{
	int a,b;
	public:
		void getdata(int x, int y);
		friend void add(A x);
};

void A::getdata(int x, int y)
{
	a=x;
	b=y;
}

void add(A x)
{
	int A:: *m = & A:: a;
	int A:: *n = & A:: b;  
	int sum;
	A *s=&x;
	sum = x.*m + (*s).*n;
	cout<<sum;
	
}
int main()
{
	A obj;
	void(A:: *p)(int x, int y)= & A :: getdata;
	(obj.*p)(10,20);
	void (*q)(A x)=&add;
	(*q)(obj);
	
	A *d=&obj;
    (*d.*p)(30,40);
    (*q)(obj);
	
	
}
