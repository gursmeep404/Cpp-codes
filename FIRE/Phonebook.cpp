//phonebook
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the length of name");
		scanf("%d",&n);
	char name[n];

	
	
	printf("Name:");
	for(int j=0;j<n;j++)
	{
		scanf(" %c", &name[j]); // space before %c while using scanf in order to consume newline character
	}
	int age;
	printf("Age:");
	scanf("%d",&age);
	printf("phone number:");
	int ph[10];
	for(int i=0; i<10;i++)
	{
		scanf(" %d",&ph[i]);
	}
	printf("name:\n");
	for(int i=0;i<n;i++)
	{
		printf("%c",name[i]);
	}
	printf("\nage:%d\nphone number:", age);
	for(int i=0;i<10;i++)
	{
		printf("%d",ph[i]);
	}
	
}
