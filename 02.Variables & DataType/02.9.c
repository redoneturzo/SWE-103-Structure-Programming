//09. Create a program that calculates the total cost of items using float data type.

#include<stdio.h>

int main ()
{
    int itemnum;
    itemnum = 5;
    float percost, totalcost;
    percost = 55.512;
    totalcost = itemnum * percost;
    printf("Total Price = %.3f", totalcost);

    return 0;
}
