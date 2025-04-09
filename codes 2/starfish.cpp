//open a file and write into it using insertion operator and later use append mode
#include <iostream>
#include <fstream>
using namespace std;
int main()
{	
   fstream file;
   file.open("palms",ios::out);
   if(!file)
   {
   	cout<<"error"<<endl;
   	return 0;
   }
   cout<<"success"<<endl;
   file<<"josephine"<<endl;
   file<<"chloe"<<endl;
   file<<"may"<<endl;
   file.close();
   file.open("text",ios::app);
   file<<"april"<<endl;
   file.close();
}

//write using put()
/*#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream file;
	file.open("starfish");
	char ch[80]="Idiot";
   for(int i=0;i<5;i++)
   {
   
	file.put(ch[i]);
}



}*/


