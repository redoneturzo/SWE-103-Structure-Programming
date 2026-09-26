//14. use of some formate specifiers in C

#include<stdio.h>

int main ()
{
    int a = 1;
    float b = 1.5;
    char c = 'A';
    char d[] = "Redone Turzo";

    printf("a = %d\n", a); // formate specifier for int
    printf("a = %i\n", a); // formate specifier for int also
    printf("b = %f\n", b); // formate specifier for float
    printf("b = %lf\n", b); // formate specifier for double
    printf("c = %c\n", c); // formate specifier for char
    printf("d = %s", d); // formate specifier for string

    return 0;
}
