//overloading template function
#include<iostream>
using namespace std;
template<class T1>
void fun(T1 a)
{
	cout<<"Hey I am first template"<<endl;
	cout<<a<<endl;
}
template<class T1, class T2>
void fun(T1 a, T2 b)
{
	cout<<"Hey I am second template"<<endl<<a<<endl<<b<<endl;
}
void fun(double x)
{
	cout<<"Hey I am a normal function"<<endl<<x<<endl;
}

int main()
{
	fun(3.7);
	fun(7);
	fun('g');
	fun("We were in paris");
	fun("We were in","London");
	fun(3,7.8);
}
