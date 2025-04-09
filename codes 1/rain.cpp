// Compliment of a binary number with and without nesting of member functions
#include<iostream>
#include<string>
#include<cstring>
using namespace std;

class A
{
	private:
	string s;
	
	public:
		void getdata();
		void verify();
		void compliment();
		void display();
	
};
void A::getdata()
{
	cout<< " Enter a binary number";
	
	cin>> s;
	verify();
	
	
}

void A::compliment()
{
	int y;
	y=s.length();
	
	for(int i=0; i<y;i++)
	{
		if(s[i]=='0')
		{
			s[i]='1';
		}
		else
		{
			s[i]='0';
		}
		
		
	}
	display();
	
	
}

void A::display()
{
	cout << s;
}

void A::verify()
{
	int j=s.length();
	for(int i=0;i<j;i++)
	{
		if (s[i]=='0'|| s[i]=='1')
		{
			
		}
		else
		{
			cout<< "Incorrect binary number format...the program will quit";
			exit(0);
		}
	}
	compliment();
}
int main()
{
  A obj;
   obj.getdata();
 //  obj.verify();
   //obj.compliment();
  // obj.display();
   
	
}
