//05. Write a program to calculate and print the sum and average of three numbers.

#include<stdio.h>

int main()
{
    int a, b, c, sum, avg;
    a = 1, b = 2, c = 3;
    sum = a + b + c;
    avg = (a + b + c) / 3;
    printf("sum = %d\n", sum);
    printf("avg = %d\n", avg);

    return 0;
}
