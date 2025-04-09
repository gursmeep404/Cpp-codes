//virtual base class
#include<iostream>
using namespace std;
class student
{
	protected:
	int roll_number;
	public:
	
		void set_value(int);
};

	void student::set_value(int x)
	{
		roll_number=x;
	}


class test: virtual public student
{
	protected:
	int sub1;
	int sub2;
	public:
		
			void set_marks(int,int);
};
void test:: set_marks(int x, int y)
{
	sub1=x;
	sub2=y;
}

	
	class sports: virtual public student
	{
		protected:
		int smarks;
		public:
			void set_smarks(int);
			
	};
		
	void sports:: set_smarks(int x)
	{
		smarks=x;
	}
class result:public test, public sports
{
	int total_marks;
	public:
		void display();
		void add();
		
};

void result::add()
{
	
	total_marks=sub1+sub2+smarks;
}
void result :: display()
{
	cout<<"Roll number:"<<roll_number<<endl;
	cout<<"Marks in sub1:"<<sub1<<endl;
	cout<<"Marks in sub2:"<<sub2<<endl;
	cout<<"Marks in sports:"<<smarks<<endl;
	cout<<"total score:"<<total_marks;
}

int main()
{
	result obj;
obj.set_smarks(6);
obj.set_value(102217065);
obj.set_marks(27,30);
	obj.add();
	obj.display();
}
