//Dynamic initialisation of objects
#include<iostream>
using namespace std;

class deposit
{
	int amount,period;
	float rate;
	public:
		
			deposit()
			{
			}
			deposit(int p,int q, float r)
			{
				amount=p;
				period=q;
				rate=r;
				cout<<p<<"  "<<q<<"  "<<r<<endl;
			}
			deposit(int p=3,int q=3,double r=0.12)
			{
				amount=p;
				period=q;
				rate=r;
				cout<<p<<"  "<<q<<"  "<<r<<endl;
			}
		
};
int main()
{
	int a,b;
	float c;
	cout<<"Enter amount, period, interest rate(in percent)"<<endl;
	cin >> a >> b >> c;
	deposit d1(a,b,c);
		cout<<"Enter amount, period, interest rate(in decimal)"<<endl;
		int d,e;
		float f;
		cin>>d>>e>>f;
			deposit d2(d,e,f);
			cout<<"Enter amount, period";
			int g,h;
			cin>>g>>h;
			deposit d3(g,h);
			
			
	
   
   	
}
