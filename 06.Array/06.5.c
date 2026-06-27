///5.Separate and print even and odd numbers from an array.
#include<stdio.h>
int main()
{
    int arr[5] = {10, 11, 12, 13, 14};
    printf("Even numbers:");
    for(int i = 0; i < 5; i++)
    {
        if(arr[i] % 2 == 0)
        {
            printf("%d", arr[i]);
        }
    }

    printf("\nOdd numbers:");
    for(int i = 0; i < 5; i++)
    {
        if(arr[i] % 2 != 0)
        {
            printf("%d", arr[i]);
        }
    }

    return 0;
}
