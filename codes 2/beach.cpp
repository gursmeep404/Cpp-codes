// function templates with multiple parameters
#include<iostream>
using namespace std;
template<class T1, class T2>
void fun(T1 x, T2 y)
{
	cout<<x<<endl<<y<<endl;
}
int main()
{
	fun(3,"I am a mess");
}

// Non type template arguments for class
/*#include<iostream>
using namespace std;
template<class T1, int c>
class A
{
	T1 heat;
	public:
		A()
		{
			heat= c;
		}
		void display()
		{
			cout<<heat;
		}
};
int main()
{
	A <int,10> obj;
	obj.display();
}*/

//Non type arguments for functions
/*#include<iostream>
using namespace std;
template<class T1, int y>
void fun(T1 a)
{
	cout<<a<<endl;
	cout<<y<<endl;
}


int main()
{
	fun<char,34>('d');
}*/

