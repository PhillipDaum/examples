#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    //validate user input
    float money;
    do 
    {
        money = get_float("Change owed:\n");
    }
    while (money <= 0);
    //calculate amount of coins
    int cents = round(money * 100);
    int quarters = cents / 25;
    int dimes = (cents % 25) / 10;
    int nickels = ((cents % 25) % 10) / 5;
    int pennies = ((cents % 25) % 10) % 5;
    int change = quarters + dimes + nickels + pennies;
    //print amount of coins
        printf ("%d\n", change);
}
