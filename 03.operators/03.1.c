/* This directory is covered the following topics:
* types of operators in C: Arithemetic, Assingment, Comparision, Logical operators.
* special case of pre-increment, pre-decrement, post-increment and post-decrement.
*/

// problem 01: Arithmetic operators

#include<stdio.h>

int main()
{
    int a=6,b=2;
    printf("%d,%d\n",a,b);                // print the value of a and b only
    printf("Addition=%d\n",a+b);          //Addition(+)
    printf("Subtraction=%d\n",a-b);      // Subtraction (-)
    printf("Multiplication=%d\n",a*b);      //Multiplication(*)
    printf("Division=%d\n",a/b);            //Division(/)
    printf("Modulus=%d\n",a%b);             //Modulus(%)
    printf("Increment=%d\n",a++);           // Post Increment (a++)
    printf("Decrement=%d\n",a--);            // Post decrement (a--)


    return 0;
}
