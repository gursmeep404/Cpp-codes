#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long num= get_long("Number:");  //long to store larger integers and short to store smaller ones
    long numf=num;   // when scope finishes inside a block and you want to use the original value then copy in another variable
    int checksum1=0;
    int checksum2=0;
    int checksum;
    for(int i=1; num>0;i++)
    {
        if(i%2==0)
        {
            int a;
            a=(num%10)*2;

            if(a<10)
            checksum1=checksum1+ a;

            else
            checksum1=checksum1 + (a/10)+ (a%10);

        }
        else
        {
            checksum2=checksum2+ (num%10);

        }
        num=num/10;
        checksum=checksum1+checksum2;
        if(num==0)
        {
     //   printf("%d\n",checksum);
          if(checksum%10==0)
          {
             if(i==15 && ((numf/(1e13)>=34 && numf/(1e13)<35)  || (numf/(1e13)>=37 && numf/(1e13)<38 ))) // can't write two inequalities clubbed together they have to separated by logical and
       {
        printf("AMEX\n");
       }
       else if(i==16 && 50<numf/(1e14) && numf/(1e14)<56)
       {
        printf("MASTERCARD\n");
       }
       else if((i==13||i==16)&&((numf/(1e12)>=4 && numf/(1e12)<5)|| (numf/(1e15)>=4 && numf/(1e15)<5))) //1e13 is used to write large powers. Treated like float
       {
        printf("VISA\n");
       }
       else
       {
        printf("INVALID\n");
       }
          }
          else
          {
            printf("INVALID\n");
          }
        }
    }

}
