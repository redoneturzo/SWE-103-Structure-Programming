// problem 04: Logical operators

#include<stdio.h>

int main()
{
    int a = 10,b = -20;
    printf("%d, %d\n", a,b);
    printf("Logical AND  : %d\n", a>0 && b>0);
    printf("Logical OR  : %d\n", a>0 || b>0);
    printf("Logical NOT  : %d\n", !(a>b));

}
