#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int startsize;
    do
    {
        startsize = get_int("Start size: ");
    }
    while (startsize < 9);
    int endsize;
    do
    {
        endsize = get_int("End size: ");
    }
    while (endsize < startsize);
    int Years = 0;

    while (startsize < endsize)
    {
        startsize = startsize + (startsize / 3) - (startsize / 4);
        Years++;
    }

    printf("Years: %i", Years);
}