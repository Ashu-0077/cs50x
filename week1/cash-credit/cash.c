#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Change owned: ");
    } 
    while (n < 0);

    int counter = 0;

    int coins[] = {25, 10, 5, 1};

    for (int i = 0; i < 4; i++)
    {
        while (n >= coins[i])
        {
            n -= coins[i];
            counter += 1;
        }
    }
    printf("%d\n",counter);


    
}