#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int cents;

    // Prompt the user for change until they enter a value >= 0
    do
    {
        cents = get_int("Change owned: ");
    }
    while (cents < 0);

    int coins = 0;

    // Calculate quarters (25 cents)
    while (cents >= 25)
    {
        cents = cents - 25;
        coins++;
    }

    // Calculate dimes (10 cents)
    while (cents >= 10)
    {
        cents = cents - 10;
        coins++;
    }

    // Calculate nickels (5 cents)
    while (cents >= 5)
    {
        cents = cents - 5;
        coins++;
    }

    // Calculate pennies (1 cent)
    while (cents >= 1)
    {
        cents = cents - 1;
        coins++;
    }

    // Print the total number of coins
    printf("%i\n", coins);
}
