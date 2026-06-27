///2.Find the largest and smallest element in an array.
#include<stdio.h>
int main()
{
    int arr[5] = {10,20,30,40,50};
    int largest = arr[0];
    int smallest = arr[0];
    for(int i=0; i<5; i++)
    {
        if(arr[0] < arr[i])
        {
            largest = arr[i];
        }
        if(arr[0] > arr[i])
        {
            smallest = arr[i];
        }
    }
    printf("%d\n", largest);
    printf("%d\n", smallest);

    return 0;
}
