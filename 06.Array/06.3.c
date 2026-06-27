///3.Count how many positive, negative, and zero numbers are in an array.
#include<stdio.h>
int main()
{
    int arr[5] = {-20, -10, 0, 10, 20};
    int positive = 0, negetive = 0, zero = 0;
    for(int i = 0; i < 5; i++)
    {
        if(arr[i] > 0)
        {
            positive = positive + 1;
        }
        else if(arr[i] < 0)
        {
            negetive = negetive + 1;
        }
        else
        {
            zero = zero + 1;
        }
    }
    printf("%d\n", positive);
    printf("%d\n", negetive);
    printf("%d\n", zero);

    return 0;
}
