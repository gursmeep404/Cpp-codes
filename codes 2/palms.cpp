//Random access using file pointers
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream file;
	file.open("palms",ios::in);
	if(!file)
	{
		cout<<"error";
	}
	cout<<"success"<<endl;
	file.seekg(3L,ios::beg);
	char ch;
	file>>ch;
	cout<<ch<<endl;
	file.seekg(-6L,ios::end);
	file.get(ch);
	cout<<ch<<endl;
	file.seekg(4L,ios::cur);
	cout<<ch<<endl;
}
