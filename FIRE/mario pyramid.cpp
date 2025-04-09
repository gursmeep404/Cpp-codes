#include<stdio.h>
int main()
{
	 int h;
    do
    {
        printf("Enter the height of the pyramid from 1 to 9");
        scanf("%d",&h);
    }while(h<0 || h>9);


    for(int i=0;i<h;i++)
    {
    	int z=i;
        for(;z<(h-1);z++)
        {
            printf(" ");
        }
        for(int j=0;j<=i;j++)
        {
        printf("#");

        }
        printf("  ");
        for(int j=0;j<=i;j++)
        {
        printf("#");
        }
        printf("\n");
}
}
