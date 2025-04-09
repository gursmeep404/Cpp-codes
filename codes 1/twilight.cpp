#include<iostream>
using namespace std;
class A;

class B
{

	int code;
	int value;
	public:
		B()
		{
		}
	
	  void	display()
	  {
	  	cout<<"code:"<<code<<endl;
	  	cout<<"value"<<value<<endl;
	  }
		int getdata1(int x, int y)
		{
			code= x;
			value= y;
			
		}
		
};
class A
{
	int code;
	int items;
	int value;
	public:
		A (int x, int y, int z)
		{
			code =x;
			items=y;
			value =z;
		}
		void display()
		{
			cout<<"Code:"<<code<<endl;
				cout<<"items:"<<items<<endl;
					cout<<"value:"<<value<<endl;
		}
		operator int()
		{
			return items*value;
		}
		 operator B()
		{
	       B temp;
	       
			temp.getdata1(code,value);
			
			
	
			return temp;
		}
		
	
};
int main()
{
	A obj(100,5,140);
	obj.display();
	int a;
	a=obj;
	cout<<"stock value="<<a<<endl;
	B obj1;
obj1=obj;
	
	obj1.display();
}
