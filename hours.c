#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

float calc_hours(int hours[], int weeks, char output);

int main(void)
{
    int weeks = get_int("Number of weeks taking CS50: ");
    int hours[weeks];

    for (int i = 0; i < weeks; i++)
    {
        hours[i] = get_int("Week %i HW Hours: ", i);
    }

    char output;
    do
    {
        output = toupper(get_char("Enter T for total hours, A for average hours per week: "));
    }
    while (output != 'T' && output != 'A');

    printf("%.1f hours\n", calc_hours(hours, weeks, output));
}

// TODO: complete the calc_hours function
float calc_hours(int hours[], int weeks, char output)
{
    int hoursum = 0;

    // for loop adds contents of each element of hours[] into n
    for (int n = 0; n < weeks; n++)
    {
        hoursum += hours[n];
    }

    // only using if statement to return the total
    if (output == 'T')
    {
        return hoursum;
    }

    // this gives us the result for average hours
    return (float) hoursum / weeks;
}