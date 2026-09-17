#include <ctype.h>
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letter(string text);
int count_word(string text);
int count_sentence(string text);


int main(void)
{
    string text = get_string("Text: ");

    int letter = count_letter(text);
    int word = count_word(text) + 1;
    int sentence = count_sentence(text);

    float L = ((float) letter / word) * 100;
    float S = ((float) sentence / word) * 100;

    int index = round(0.0588 * L - 0.296 * (S) - 15.8);

    if (index < 1)
    {
        printf("Before Grade 1\n");
    }

    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }

    else
    {
        printf("Grade %i\n", index); 
    }    
}

int count_letter(string text)
{
    int letter = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isalpha(text[i]))
        {
            letter += 1;
        }
    }
    return letter;
}

int count_word(string text)
{   
    int word = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isspace(text[i]))
        {
            word += 1;
        }
    }
    return word;
}

int count_sentence(string text)
{
    int sentence = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] == '!' || text[i] == '.' || text[i] == '?')
        {
            sentence++;
        }
    }
    return sentence;
}