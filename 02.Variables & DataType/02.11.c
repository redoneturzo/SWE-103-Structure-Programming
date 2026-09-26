//11. Demonstrate explicit type conversion in C using an example of “int” to “float”.

#include<stdio.h>

int main()
{
    int a = 5, b = 2;
    float div = (float) a / b; // here only 5 is treat as 5.0 not 2

    printf("Div = %f", div); //implicit means manually changed

    return 0;

}
