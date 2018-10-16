#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        int c = 0;
        int length = 0;
        int k[strlen(argv[1])];
        for (int j = 0; j < strlen(argv[1]); j++)
        {
            if ((argv[1][j] >= 'a' && argv[1][j] <= 'z') || (argv[1][j] >= 'A' && argv[1][j] <= 'Z'))
            {
                k[j] = tolower(argv[1][j]) - 'a';
                length++;
            }
            else
            {
                printf("please input a single word with only alphabetical characters as an argument!! \n");
                return 1;
            }
        }
        string s = get_string("plaintext: ");
        char o[strlen(s)];
        for (int i = 0; i < strlen(s); i++)
        {
            if (c >= length)
            {
                c = 0;
            }
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                o[i] = (s[i] + k[c]) % ('Z' + 1);
                if (o[i] < 'A')
                {
                    o[i] += 'A';
                }
                c++;
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                o[i] = (s[i] + k[c]) % ('z' + 1);
                if (o[i] < 'a')
                {
                    o[i] += 'a';
                }
                c++;
            }
            else
            {
                o[i] = s[i];
            }
        }
        printf("ciphertext: ");
        for (int j = 0; j < strlen(s); j++)
        {
            printf("%c", o[j]);
        }
        printf("\n");
        return 0;
    }
    else
    {
        printf("please input a single word as an argument!! \n");
        return 1;
    }
}