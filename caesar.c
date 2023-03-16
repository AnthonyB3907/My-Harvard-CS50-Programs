#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

bool checkkey(string s);

// Array for letters to assign them values 0-25
char uppers[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
char lowers[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

int main(int argc, string argv[])
{
    // return 1 if we get 0 or 2+ command line arguments
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // return 1 if checkkey is false
    else if (checkkey(argv[1]) == false)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // set the input CLA to integer in a variable
    int key = atoi(argv[1]);
    // variables to store result of formula
    char upperl = '\0';
    char lowerl = '\0';

    string plaintext = get_string("plaintext:  ");

    printf("ciphertext: ");

    // loop to step through input text by char and convert with formula
    for (int i = 0; i < strlen(plaintext); i++)
    {
        // if uppercase letter, then shift the letter by appropriate amount and print
        if (isupper(plaintext[i]))
        {
            upperl = (plaintext[i] - 'A' + key) % 26;
            printf("%c", uppers[(int) upperl]);
        }

        // if lowercase letter, then shift the letter by appropriate amount and print
        else if (islower(plaintext[i]))
        {
            lowerl = (plaintext[i] - 'a' + key) % 26;
            printf("%c", lowers[(int) lowerl]);
        }

        // if it is not alphanumeric, just print what is there
        else if (isalpha(plaintext[i]) == 0)
        {
            printf("%c", plaintext[i]);
        }
    }

    printf("\n");
}

// function checks each char of the given CLA and returns false if it is not a number 0-9
bool checkkey(string s)
{
    int c = 0;

    for (int i = 0; i < strlen(s); i++)
    {
        if (isdigit(s[i]) == false)
        {
            c++;
        }
    }

    if (c > 0)
    {
        return false;
    }

    return true;
}