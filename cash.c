#include <cs50.h>
#include <stdio.h>

int calculate_quarters(int cents)
{
    int quarters = 0;
    while (cents >= 25)
    {
        quarters++;
        cents = cents - 25;
    }
    return quarters;
}

int calculate_dimes(int cents)
{
    int dimes = 0;
    while (cents >= 10) // Just check if we can use a dime
    {
        dimes++;
        cents = cents - 10;
    }
    return dimes;
}

int calculate_nickels(int cents)
{
    int nickels = 0;
    while (cents >= 5) // Just check if we can use a nickel
    {
        nickels++;
        cents = cents - 5;
    }
    return nickels;
}

int calculate_pennies(int cents)
{
    int pennies = 0;
    while (cents >= 1) // Just check if we can use a penny
    {
        pennies++;
        cents = cents - 1;
    }
    return pennies;
}
int main(void)
{
    int cents;
    do
    {
        cents = get_int("change owed: ");
    }
    while (cents < 0);

    // Calculate coins for each denomination in sequence
    int quarters = calculate_quarters(cents);
    cents = cents - (quarters * 25);

    int dimes = calculate_dimes(cents);
    cents = cents - (dimes * 10);

    int nickels = calculate_nickels(cents);
    cents = cents - (nickels * 5);

    int pennies = calculate_pennies(cents);
    cents = cents - (pennies * 1);

    // Calculate total coins
    int total_coins = quarters + dimes + nickels + pennies;

    // Print the total number of coins
    printf("%i\n", total_coins);
}
