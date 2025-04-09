// transpose of a matrix by returning object
#include<iostream>
using namespace std;
class matrix
{
	int a[3][3];
	public:
		void getdata();
		void display();
		friend matrix transpose(matrix x);
};

void matrix::getdata()
{
	cout<<"Enter the elements of 3*3 matrix"<<endl;
	for(int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			cin>>a[i][j];
			cout<<"a["<<i<<"] ["<<j<<"]= "<< a[i][j]<<endl;
			
		}
	
	}
}

void matrix:: display()
{
	cout<<"You entered the following matrix:"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<a[i][j];
			cout<<"   ";
		}
		cout<<endl;
	}
}

matrix transpose(matrix x)
{
	matrix obj3;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			obj3.a[i][j]=x.a[j][i];
		}
	}
	return obj3;
}
int main()
{
	matrix obj1,obj2;
	obj1.getdata();
	obj1.display();
	obj2= transpose(obj1);
	obj2.display();
	
	}
