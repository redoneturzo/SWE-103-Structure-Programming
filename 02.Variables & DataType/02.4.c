//04. Create a program to take two integer value input & swap values between two integer variables.

#include<stdio.h>
int main ()
{
    int a, b;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("Now , a=%d, b=%d\n", a, b);
    int temp ;
    temp = a;
    a = b;
    b = temp;
    printf("After swap , a = %d, b = %d", a, b);

    return 0;
}
