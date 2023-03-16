#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

// Calculates Reading Grade Level of a given text based on Coleman-Liau index

int letters(string text2);
int words(string word);
int sentences(string sentence);

// Main handles input, calculations, and output
int main(void)
{
    // Get text from user
    string text = get_string("Text: ");

    // Call functions and store result in new variables
    int letters2 = letters(text);
    int words2 = words(text);
    int sentences2 = sentences(text);

    // Next 3 variables are used to calculate The Coleman-Liau index of 'text'
    double avgletters = (float) letters2 / (float) words2 * 100.0;
    double avgsentences = (float) sentences2 / (float) words2 * 100.0;
    double index = 0.0588 * avgletters - 0.296 * avgsentences - 15.8;

    // Prints amount of letters, words, and sentences in 'text'
    printf("Letters: %i\n", letters2);
    printf("Words: %i\n", words2);
    printf("Sentences: %i\n", sentences2);

    // Printing 'index' with certain conditions
    if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", (int) round(index));
    }
}

// Find how many letters are in 'text'
int letters(string text2)
{
    int numletters = 0;

    // Add 1 to numletters if there is a letter, upper or lowercase
    for (int i = 0; i < strlen(text2); i++)
    {
        if (isupper(text2[i]))
        {
            numletters++;
        }

        else if (islower(text2[i]))
        {
            numletters++;
        }
    }

    return numletters;
}

// Find how many words are in 'text'
int words(string word)
{
    int numwords = 1;

    /* Add 1 to numwords if there is an empty space.
    Always an extra word after last space in a sentence, so start variable at one */
    for (int j = 0; j < strlen(word); j++)
    {
        if (word[j] == ' ')
        {
            numwords++;
        }
    }

    return numwords;
}

// Find how many sentences are in 'text'
int sentences(string sentence)
{
    int numsent = 0;

    // Add 1 to numsent if there is specific special character
    for (int k = 0; k < strlen(sentence); k++)
    {
        if (sentence[k] == '.' || sentence[k] == '!' || sentence[k] == '?')
        {
            numsent++;
        }
    }

    return numsent;
}