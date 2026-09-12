#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long card;
    do
    {
        card = get_long("Number: ");
    } 
    while (card < 0);
    
    int length = 0;
    long tempCard = card;

    do
    {
        length++;
        tempCard /= 10;

    } 
    while (tempCard > 0);

    if (length != 13 && length != 15 && length != 16)
    {
        printf("INVALID\n");
        return 0;
    }

    int sum1 = 0, sum2 = 0, total = 0;
    long mod1, mod2, d1, d2;
    tempCard = card;

    do
    {
        mod1 = tempCard % 10;
        sum1 += mod1;
        tempCard /= 10;

        mod2 = tempCard % 10;
        mod2 *= 2;
        d1 = mod2 / 10;
        d2 = mod2 % 10;
        sum2 = sum2 + d1 + d2;
        tempCard /= 10;


    } 
    while (tempCard > 0);
    total = sum1 + sum2;

    if (total % 10 != 0)
    {
        printf("INVALID\n");
        return 0;
    }
    
    tempCard = card;
    for (int i = 0; i < length-2; i++)
    {
        tempCard /= 10;
    }

    bool valid_card = false;

    if (length == 15)
    {
        if (tempCard == 34 || tempCard == 37)
        {
            printf("AMEX\n");
            valid_card = true;
        }
    }
    if (length == 16)
    {
        if (tempCard >= 51 && tempCard <= 55)
        {
            printf("MASTERCARD\n");
            valid_card = true;
        }
    }
    if (length == 13 || length == 16)
    {
        if (tempCard / 10 == 4 )
        {
            printf("VISA\n");
            valid_card = true;
        }
    }
    if (valid_card == false)
    {
        printf("INVALID\n");
    }

}
