// passing an object as argument...by value and by reference
#include<iostream>
using namespace std;
class time
{
	private:
		int hour;
		int min;
		public:
			void getdata(int x, int y)
			{
				hour=x;
				min=y;
				
			}
			void add(time x, time y);
			void display(int x);
			
};

void time::add(time x, time y)
{
	int z;
	z=x.min+y.min;
	min=z%60;
	hour= x.hour+ y.hour+ z/60;
}

void time::display(int x)
{
	cout<<"T"<<x<<" = "<<hour<<" hours and "<<min<<" minutes"<<endl;
}
int main()
{
	time t1,t2,t3;
	t1.getdata(2,45);
	t2.getdata(3,30);
	t3.add(t1,t2);
	t1.display(1);
	t2.display(2);
	t3.display(3);
	
	// cout<<"T1="<<t1.display(); and so on
	
}
