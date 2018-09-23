#include <stdio.h>
#include <cs50.h>

// check the validity with Luhn's algorithm
bool valid(long long num)
{
    long long temp = num;
    int helper;
    int result = 0;
    int c = 0;
    while (num != 0)
    {
        temp = num % 10;
        c++;
        if (c % 2 == 0)
        {
            helper = temp * 2;
            if (helper > 9)
            {
                result = result + helper / 10;
                result = result + helper % 10;
            }
            else
            {
                result = result + helper;
            }
            num = num / 10;
        }
        else
        {
            result += temp;
            num = num / 10;
        }
    }
    if (result % 10 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(void)
{
    long long num = get_long_long("Number: ");
    if (num / 10000000000000 == 34 || num / 10000000000000 == 37)
    {
        if (valid(num))
        {
            printf("AMEX\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else if (num / 100000000000000 > 50 && num / 100000000000000 < 56)
    {
        if (valid(num))
        {
            printf("MASTERCARD\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else if (num / 1000000000000000 == 4 || num / 1000000000000 == 4)
    {
        if (valid(num))
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
    return 0;
}