//12. Demonstrate explicit type conversion in C using an example of “int” to “float”.

#include<stdio.h>

int main()
{
    int a = 5, b = 2;
    float div = a / b; // here 5 and  2 is int that called in the previous line so here happen integer division

    printf("Div = %f", div); //implicit means manually changed

    return 0;

}

