#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        int k = atoi(argv[1]);
        k = k % 26;
        string s = get_string("plaintext: ");
        char o[strlen(s)];
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                o[i] = (s[i] + k) % ('Z' + 1);
                if (o[i] < 'A')
                {
                    o[i] += 'A';
                }
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                o[i] = (s[i] + k) % ('z' + 1);
                if (o[i] < 'a')
                {
                    o[i] += 'a';
                }
            }
            else
            {
                o[i] = s[i];
            }
        }
        printf("ciphertext: %s", o);
        printf("\n");
        return 0;
    }
    else
    {
        printf("please input a positive number as an argument!!");
        return 1;
    }
}