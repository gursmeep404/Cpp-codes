//hybrid inheritance
#include<iostream>
using namespace std;
class student
{
	int roll_number;
	public:
		int show_rollnumber();
		void set_value();
};

	void student::set_value()
	{
		roll_number=102217065;
	}

	int student:: show_rollnumber()
	{
		return roll_number;
	}
class test: public student
{
	int sub1;
	int sub2;
	public:
		int show_sub1();
			int show_sub2();
			void set_marks();
};
void test:: set_marks()
{
	sub1=27;
	sub2=33;
}
int test::show_sub1()
{
	return sub1;
}
	int test::show_sub2()
	{
		return sub2;
		
	}
	
	class sports
	{
		int smarks;
		public:
			void set_smarks();
			int show_smarks();
	};
		int sports::show_smarks()
		{
			return smarks;
		}
	void sports:: set_smarks()
	{
		smarks=6;
	}
class result:public test, public sports
{
	int total_marks;
	public:
		void display();
		void add();
		void getdata();
};
void result::getdata()
{
	set_smarks();
	set_value();
	set_marks();
}
void result::add()
{
	
	total_marks=show_sub1()+show_sub2()+show_smarks();
}
void result :: display()
{
	cout<<"Roll number:"<<show_rollnumber()<<endl;
	cout<<"Marks in sub1:"<<show_sub1()<<endl;
	cout<<"Marks in sub2:"<<show_sub2()<<endl;
	cout<<"Marks in sports:"<<show_smarks()<<endl;
	cout<<"total score:"<<total_marks;
}

int main()
{
	result obj;
	obj.getdata();
	obj.add();
	obj.display();
}
