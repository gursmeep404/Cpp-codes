// writing an object into a file and then reading the file to store data in another object in binary mode
#include<iostream>
#include<fstream>
using namespace std;
class A
{
	char name[100];
	int roll_no;
	public:
		void getdata()
		{
			cout<<"enter roll number"<<endl;
			cin>>roll_no;
			cout<<"enter name"<<endl;
			cin>>name;
			
		}
		void putdata()
		{
			cout<<"name:"<<name<<endl;
			cout<<"roll no.="<<roll_no<<endl;
		}
};

/*int main()
{
	A a,b;
	a.getdata();
	fstream file;
	file.open("margarita",ios::out|ios::binary);
	if(!file)
	{
		cout<<"error"<<endl;
		return 0;
	}
	cout<<"success"<<endl;
//	char space[80]="I am a mess";
//	file.write((char*)&space,sizeof(space));
	file.write((char*)&a,sizeof(a));
	file.close();
	file.open("margarita",ios::in|ios::binary);
	if(!file)
	{
		cout<<"error"<<endl;
		return 0;
	}
	file.read((char*)&b,sizeof(b));
	b.putdata();
}*/
//writing multiple objects
int main()
{
	A a[5],b[5];
	for(int i=0;i<5;i++)
	{
		a[i].getdata();
	}
	fstream file;
	file.open("margarita",ios::out|ios::binary);
	if(!file)
	{cout<<"error"<<endl;
	}
	cout<<"success"<<endl;
	for(int i=0;i<5;i++)
	{
		file.write((char*)&a[i],sizeof(a[i]));
	}
	file.close();
	file.open("margarita",ios::in|ios::binary);
	for (int i=0;i<5;i++)
	{
		file.read((char*)&b[i],sizeof(b[i]));
	}
	for(int i=0;i<5;i++)
	{
		b[i].putdata();
	}
}
