// storing details of managers in an array of objects
#include<iostream>
using namespace std;
class A
{
	private:
		int age;
		string name;
		public:
			void getdata(int i);
			void display(int i);
			
};

void A::getdata(int i)
{
	cout<< "Details of Manager"<<i+1<<endl;
	cout<< "Enter name:";
	cin>> name;
	
	cout<<"Enter age:";
	cin>>age;
}

void A :: display(int i)
{
	cout<<"MANAGER"<<i+1<<endl;
	cout<<"Name:"<<name<<endl;
	cout<<"age:"<<age<<endl;
}
int main()
{
	A obj[3];
	for(int i=0;i<3;i++)
	{
	
	obj[i].getdata(i);
}

for(int i=0;i<3;i++)
{
	obj[i].display(i);
}


}
