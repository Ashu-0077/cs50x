#include <stdio.h>

int main(void)
{
    int arr[5] = {1,2,3,4,5};

    int n = 5;

    int upper = 5;
    int lower = 0;
    int middle = (upper - lower) / 2;
    int step = 0;

    do
    {
        if (arr[middle] == n)
        {
            step += 1;
            printf("Number is at index %i\n",middle);
            printf("It took %i steps\n",step);

            break;
        }

        else if (arr[middle] > n)
        {
            upper = middle - 1;
            middle = (upper + lower) / 2;
            step += 1;
        }

        else if (arr[middle] < n)
        {
            lower = middle + 1;
            middle = (upper + lower) / 2;
            step += 1;
        }

    } 
    while (middle != 0);

}