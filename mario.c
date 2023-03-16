#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // get height from 1-8 inclusive
    int n;
    do
    {
        n = get_int("Height (1-8):\n");
    }
    while (n < 1 || n > 8);

    // loop based on user input
    for (int i = 0; i < n; i++)
    {
        // 1 less space than number received from user
        for (int spaces = i + 1; spaces < n; spaces++)
        {
            printf(" ");
        }

        // reverse increment of variable lefthash and righthash to increase loop amount each time
        for (int lefthash = n - i - 1; lefthash < n; lefthash++)
        {
            printf("#");
        }

        printf("  ");

        for (int righthash = n - i - 1; righthash < n; righthash++)
        {
            printf("#");
        }

        printf("\n");
    }
}