// using arrays in class to make a shopping list to place an order
#include<iostream>
#include<cstring>
#include<string>
using namespace std;

class item
{
	private:
		int i;
		int code[20], price[20];
	public:
		void getdata()
		{
			i=0;
		}
		void add();
		void delete_item();
		void display_total();
		void display_items();
};

void item::add()
{
     
	cout<<" Enter item code:"<<endl;
	cin>>code[i];
	cout<<"Enter item price:"<<endl;
	cin>>price[i];
	i++;
	
}

void item::delete_item()
{
	int y;
	cout<<"Enter the item code you want to delete"<<endl;
	cin>>y;
	for(int j=0;j<i;j++)
	{
		if(code[j]==y)
		{
		  price[j]=0;
		
		}
		else{
			cout<<"item not found";
		}
	}
}

void item::display_total()
{
	int sum=0;
	for(int k=0;k<i;k++)
	{
		sum=sum+price[k];
	}
	cout<<" The total cost of the order is:"<<sum<<endl;
}

void item::display_items()
{
	cout<<" Code        Price"<<endl;
	for(int n=0;n<i;n++)
	{
		
		cout<<code[n]<<"        "<<price[n]<<endl;
	}
}

int main()
{
	item obj;
	int x;
	obj.getdata();
	do
	{
	
	
	cout<< "You can do the following:"<<endl;
	cout<<"1. Add an item to the list"<<endl;
	cout<<"2. Delete an item from the list"<< endl;
	cout<<"3. Display the total order"<<endl;
	cout<<"4. Display all items"<<endl;
	cout<<"5. Quit"<<endl;
	cout<<" Press a number"<<endl;
	cin>>x;
	
	switch(x)
	{
		case 1:
			{
				obj.add();
				break;
			}
			case 2:
				{
					obj.delete_item();
					break;
				}
				case 3:
					{
						obj.display_total();
						break;
					 }
					 case 4:
					 	{
					 		obj.display_items();
					 		break;
						 }
					 case 5:
					 	{
					 		break;
						 }
						 
				default:
					{
						cout<<"Invalid number";
						break;
					}
	}
} while(x != 5);

}



