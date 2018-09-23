#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int change;
    int counter = 0;
    do
    {
        change = round(get_float("Change owed: ") * 100); // ask user to input the change owed and convert it to cents.
    }
    while (change <= 0); // checks if the input is non-negative

// greedy algorithm implementation

    while (change > 0)
    {
        if (change >= 25)
        {
            change -= 25;
            counter++;
        }
        else if (change >= 10)
        {
            change -= 10;
            counter++;
        }
        else if (change >= 5)
        {
            change -= 5;
            counter++;
        }
        else
        {
            change--;
            counter++;
        }
    }
    printf("%i\n", counter); // prints the no of coins to the screen
}