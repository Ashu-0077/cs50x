#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int arr[] = {9,8,7,6,5,4,3,2,1};

    for (int i = 0; i < 8; i++)
    {
        int lowestIndexNumber = i;

        for (int j = i + 1; j < 9; j++)
        {
            if (arr[j] < arr[lowestIndexNumber])
            {
                lowestIndexNumber = j;
            }
        }

        if (lowestIndexNumber != i)
        {
            int temp = arr[i];
            arr[i] = arr[lowestIndexNumber];
            arr[lowestIndexNumber] = temp;
        }

    }
    for (int i = 0; i < 9; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}