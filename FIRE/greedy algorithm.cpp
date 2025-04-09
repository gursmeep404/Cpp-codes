#include<stdio.h>
int get_cents (void);
int calculate_quarters(int);
int calculate_dimes(int);
int calculate_nickels(int);
int calculate_pennies(int);
int main()
{
    int cents = get_cents();

  
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

   
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

   
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

   
    int coins = quarters + dimes + nickels + pennies;

    
    printf("%i\n", coins);
}

int get_cents(void)
{
    int change;               // To be able to use a variable in the while condition of a do while loop, the variable must be defined outside the loop. If defined inside the loop then it goes out of scope.
    do
    {
    printf("change owed:");

    scanf("%d",&change);
    }while(change<0);
    return change;
}

int calculate_quarters(int cents)
{
  

      return cents/25;

}

int calculate_dimes(int cents)
{
    
    return cents/10;
}

int calculate_nickels(int cents)
{
    
    return cents/5;
}

int calculate_pennies(int cents)
{
 
    return cents/1;
}


