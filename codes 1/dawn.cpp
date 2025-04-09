// Type conversion from class to class using constructor and casting operator
#include<iostream>
#include<string>
using namespace std;
class student;


class person
{
	string name;
	int roll_no;
	public:
		person()
		{
			
		}
/*		person(student x)
	{
		name= x.getdata1();
		roll_no=x.getdata2();
	}*/
	void display()
	{
		cout<<name<<endl;
		cout<<roll_no<<endl;
	}
	void getdata(string x, int y)
	{
	   name=x;
	   roll_no=y;	
	}
};
class student
{
	string name;
	string school;
	int roll_no;
	public:
		student(string x, string y, int z)
		{
			name=x;
			school=y;
			roll_no=z;
		}
/*		string getdata1()
		{
			return name;
			
		}
		int getdata2()
		{
			return roll_no;
		}*/
		
	operator person ()
		{
			person p;
		p.getdata( name, roll_no);
			return p;
		}
	
};

int main()
{
	student s1("Ram","AABS", 1022);
	person s2;
	s2=s1;
	s2.display();
}
