//5. Write a C program to calculate the area and perimeter of a rectangle using arithmetic operators.

#include<stdio.h>
int main()
{
    int length = 10,width = 6;
    printf("area = %d\n", length * width);
    printf("perimeter = %d", (length + width) * 2);
    return 0;
}
