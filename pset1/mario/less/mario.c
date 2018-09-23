#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 0 || height > 23); // checks if input is valid

// Loops to create the half-pyramid

    for (int i = 1; i <= height; i++)
    {
        for (int k = height; k > i; k--)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}