#include <stdio.h>
#include <cs50.h>

void draw(int n);

int main(void)
{
    int n = get_int("Height: ");

    draw(n);
}

void draw(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        
        printf("\n");
    }

}