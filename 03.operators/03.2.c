// problem 02: Assignment operators

#include<stdio.h>

int main ()
{
    int a=10;
    printf("simple assignment=%d\n", a=10);
    printf("add assignment=%d\n", a+=10);   // a=a+10
    printf("subtraction assignment=%d\n", a-=10);
    printf("Multiplication assignment=%d\n", a*=10);
    printf("Division assignment=%d\n", a/=10);
    printf("Modulus assignment=%d\n", a%=10);

    return 0;
}
