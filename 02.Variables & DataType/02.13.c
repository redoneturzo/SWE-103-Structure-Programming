//13. Constant variable in C

#include<stdio.h>

int main()
{
    const int price = 50;
    printf("Price = %d", price);

    /*
    // price = 60;  // we cannot change const variable if do it goes to error
    price = 60;
    printf("Price = %d", price);
    */

    return 0;

}
