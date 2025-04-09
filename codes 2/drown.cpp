//function templates
/*#include<iostream>
using namespace std;
template<class T>
void fun(T*a,T*b)
{
	T c;
	c=*a;
	*a=*b;
	*b=c;

}
int main()
{
	int a,b;
	a=3;
	b=4;
	cout<<a<<endl<<b<<endl;
	fun(&a,&b);
	cout<<a<<endl;
	cout<<b<<endl;
}*/

/*#include<iostream>
using namespace std;
template<class T>
T fun(T a,T b)
{
	T c;
	c=a+b;
   return c;

}
int main()
{
	int x;
	x=fun(2,3);
	cout<<x;
}*/

#include<iostream>
using namespace std;
template<class T>
void fun(T a,T b)
{
	T c;
	c=a+b;
   cout<< c;

}
int main()
{
	
	fun(1.2,3.6);

}
