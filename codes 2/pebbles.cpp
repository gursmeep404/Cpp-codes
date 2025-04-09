//bubble sort using function template
#include<iostream>
using namespace std;
template<class T>
void bubblesort(T*a,int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=n-1;j>0;j--)
		{
			if(a[j]<a[j-1])
			{
				T c;
				c=a[j];
				a[j]=a[j-1];
				a[j-1]=c;
			}
		}
	}
}

int main()
{
	int n=6;
	int a[n]={3,6,9,4,65,78};
	bubblesort(a,n);
	for(int i=0;i<n;i++)
	{
	
	cout<<a[i]<<endl;
}
}
