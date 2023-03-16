#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size

    int startpop;

    do
    {
        startpop = get_int("Enter starting population (min 9): ");
    }
    while (startpop < 9);

    // TODO: Prompt for end size

    int endpop;

    do
    {
        endpop = get_int("Enter end population size: ");
    }
    while (endpop < startpop);

    // TODO: Calculate number of years until we reach threshold

    int x, y, n;

    for (n = 0; startpop < endpop; n++)
    {
        x = startpop / 3;
        y = startpop / 4;
        startpop = startpop + x - y;
    }

    // TODO: Print number of years

    printf("Years: %i\n", n);

}
