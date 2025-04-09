// Overloading of extraction and insertion operator and multiplication operator
#include<iostream>
using namespace std;
class vector
{
	int v[3];
	public:
	  friend void operator >>(istream& din, vector& s1);
	  friend void operator <<(ostream& dout, vector& s2)	;
	  friend vector operator*(int x,vector&s3);
		 friend vector operator*(vector&s3,int x);
		 
		 
};
void operator >>(istream& din, vector & s1)
{
	for(int i=0;i<3;i++)
	{
	
	      din>>s1.v[i];
}
}

void operator <<(ostream& dout, vector& s2)
{
	for (int i=0;i<3;i++)
	{
		dout<<s2.v[i];
	}
}
vector operator*(int x,vector&s3)
{
	vector v3;
	for(int i=0;i<3;i++)
	{
		v3.v[i]=x*s3.v[i];
	}
	return v3;
}
	 vector operator*(vector&s3,int x)
	 {
	 	vector v3;
	for(int i=0;i<3;i++)
	{
		v3.v[i]=x*s3.v[i];
	}
	return v3;
	 }
int main()
{
	vector v1; // create vector v1 and initialise and display using overlaoding of << and >>
	cout<<" Enter the elements of vector v1"<<endl;
	cin>> v1;
	cout<<v1;
	cout<<endl;
	vector v2,v3;
	v2= 2*v1;
	v3=v1*2;
	cout<<v2;
	cout<<endl;
	cout<<v3;
}

