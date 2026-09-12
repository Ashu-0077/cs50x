#include <stdio.h>
#include <cs50.h>

void print_spaces(int n, int i);
void print_hashes(int i);
void print_right_hashes(int i);

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    } 
    while (n < 1);

    for (int i = 0; i < n; i++)
    {
        print_spaces(n, i);

        print_hashes(i);

        print_right_hashes(i);

        printf("\n");

    }
    
}

void print_spaces(int n, int i)
{
    for (int j = 0; j < n - i - 1; j++)
    {
        printf(" ");
    }
}

void print_hashes(int i)
{
    for (int j = 0; j < i + 1; j++)
    {
        printf("#");
    }
}

void print_right_hashes(int i)
{
    printf("  ");
    for (int j = 0; j < i + 1; j++)
    {
        
        printf("#");
    }
}