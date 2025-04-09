//class templates
/*#include<iostream>
using namespace std;
template<class T>
class A
{
	T a;
	public:
		A(T x)
		{
			a=x;
		}
		void display()
		{
			cout<<a;
		}
};
int main()
{
   A <int> obj(3);
   obj.display();
   
}*/
// multiple parameters,default parameters
#include<iostream>
using namespace std;
//template<class T1, class T2>
template<class T1=float, class T2=float>
class A
{
	T1 a;
	T2 b;
	public:
		A(T1 x, T2 y)
		{
			a=x;
			b=y;
		}
		void display()
		{
			cout<<a<<endl<<b<<endl;
		}
};
int main()
{
//	A<int,float>obj(3,4.5);
		A<int>obj(3,4.5);
	obj.display();
}

