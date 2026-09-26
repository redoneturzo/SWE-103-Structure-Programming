//09. Write a C program to calculate and print the sum of two numbers entered by the user.

#include<stdio.h>

int main()
{
    int a, b, sum;
    printf("Enter a = ");
    scanf("%d", &a);
    printf("Enter b = ");
    scanf("%d", &b);
    sum = a + b;
    printf("sum = %d", sum);

    return 0;

}
