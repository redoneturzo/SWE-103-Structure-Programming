//03. Write a program using the ternary operator to find the minimum of two numbers

#include<stdio.h>

//generally the following code is cleaner, because the ternary operator -
//determines the value first, and then printf() displays it.
int main(void)
{
    int num1 = 10, num2 = 20;

    int min = (num1 > num2) ? num2 : num1;

    printf("%d is minimum", min);

    return 0;
}


// But is following code is also right
int main1()
{
    int num1 = 10, num2 = 20;

    (num1 > num2) ? printf("%d is minimum", num2) : printf("%d is minimum", num1);

    return 0;
}
