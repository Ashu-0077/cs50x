#include <ctype.h> // give access to character assignments like isupper, islower etc
#include <cs50.h>
#include <stdio.h>
#include <string.h> // give access to string length.
#include <stdlib.h> // it contains some methods that can convert string to int, float etc like atoi etc

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    
    // Validate that every character in the key is a decimal digit
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }  
    }

    int k = atoi(argv[1]);

    string plaintext = get_string("Plaintext:  ");
    printf("ciphertext: ");

    for (int j = 0, m = strlen(plaintext); j < m; j++)
    {
        if (isupper(plaintext[j]))
        {
            // -65 maps 'A'-'Z' to 0-25 for % 26 wrap-around; +65 shifts back to ASCII
            printf("%c", (plaintext[j] - 65 + k) % 26 + 65);   
        }

        else if (islower(plaintext[j]))
        {
            // -97 maps 'a'-'z' to 0-25 for % 26 wrap-around; +97 shifts back to ASCII
            printf("%c", (plaintext[j] - 97 + k) % 26 + 97); 
        }

        else
        {
            printf("%c", plaintext[j]);
        }
    }
    printf("\n");
    
}