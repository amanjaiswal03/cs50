// Helper functions for music

#include <cs50.h>
#include <math.h>
#include <string.h>
#include "helpers.h"

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    float num = atoi(&fraction[0]);
    float den = atoi(&fraction[2]);
    return (num / den) * 8;
}

// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    int n = 0;
    char letter = note[0];
    int freq = 440;
    switch (letter)
    {
        case 'A':
            n = 0;
            break;
        case 'B':
            n = 2;
            break;
        case 'C':
            n = -9;
            break;
        case 'D':
            n = -7;
            break;
        case 'E':
            n = -5;
            break;
        case 'F':
            n = -4;
            break;
        case 'G':
            n = -2;
            break;
    }
    if (strlen(note) == 2)
    {
        int octave = atoi(&note[1]);
        if (octave != 4)
        {
            n = n + (octave - 4) * 12;
        }
        freq = round(440 * pow(2.00, n / 12.00));
    }
    if (strlen(note) == 3)
    {
        char accidental = note[1];
        int octave = atoi(&note[2]);
        if (accidental == '#')
        {
            n++;
        }
        else
        {
            n--;
        }
        if (octave != 4)
        {
            n = n + (octave - 4) * 12;
        }
        freq = round(440 * (pow(2.00, n / 12.00)));
    }
    return freq;
}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    if (strcmp(s, "") == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
