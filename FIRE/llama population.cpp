// Number of years required by a population of llamas to grow from start size to end size
#include<stdio.h>
int main()
{
	int initial;
	do
	{
		
	printf(" Enter the initial size of the llama population");
	scanf("%d", &initial);
} while(initial<9);

     int final;

     do
     {
     	printf("Enter the final size of the llama population");
     	scanf("%d", &final);
	 }while(final<initial);
	 
	 int years=0;
	 do
	 {
	 initial= initial+ initial/3 -initial/4;
	 //printf("%d",initial);
	 years++;
}while(initial<=final);
     printf(" Years required by the population to grow are %d",years);
}
