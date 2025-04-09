//reading from a file using insertion operator
#include<iostream>
/*#include<fstream>
using namespace std;
int main()
{
	ifstream file;
	file.open("starfish");
	char name[80];
	while(file.eof()==0)
	{
	file>>name;
	cout<<name<<endl;
}
}
*/
// reading using getline function

/*#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream file;
	file.open("starfish",ios::in);
	if(!file)
	{cout<<"error";
	}
	char name[81];
	while(file)
	{
	
	file.getline(name,82);
	cout<<name<<endl;
}
}*/

// read using get();
/*#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream file;
	file.open("starfish",ios::in);
	if(!file)
	{
		cout<<"error";
		return 0;
	}
	char ch;
	while(!file.eof())
	{
	
	file.get(ch);
	cout<<ch;
}
	
}*/

// read using read function
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
		return 0;
	}
	char name[80];
	file.read((char*)&name,sizeof (name));
	cout<<name;
}


