//15. The size of operator

#include<stdio.h>

int main()
{
    printf("int data type size = %lu bytes\n", sizeof(int));
    printf("float data type size = %lu bytes\n", sizeof(float));
    printf("double data type size = %lu bytes\n", sizeof(double));
    printf("char data type size = %lu bytes\n", sizeof(char));

    // when we print the size of any data type, we use %lu as a formate specifier

    return 0;
}

