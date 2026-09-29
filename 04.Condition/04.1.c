//01. Write a program to check whether a number is positive or negative using an if condition

#include<stdio.h>

int main(void)
{
    int num = 10;
    if (num > 0) // zero is not positive or negative number
    {
        printf("%d is positive", num);
    }
    else
    {
        printf("%d is negative", num);
    }

    return 0;
}
