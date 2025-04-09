//destructors
#include<iostream>
using namespace std;
class A 
{
  static int count;
	public:
		A()
		{
			
			cout<<"Constructor message: Object number "<< count<<" created"<<endl;
			count++;
		}
		~A()
		{
			count--;
			cout<<"Destructor message: Object number "<< count<<"destroyed"<<endl;
			
		}

};
int A::count=1;

int main()
{
	cout<<"Inside the main block.."<<endl<<"Creating first object T1.."<<endl;
	A T1;
	{
		cout<<"Inside block 1.."<<"Creating two more objects T2 and T3.."<<endl;
		A T2,T3;
		cout<<"Leaving block 1.."<<endl;
		
	}
	cout<<"Back inside the main block"<<endl;
	
}
