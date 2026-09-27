/// input and output using string in C.

//01. Write a program using string

#include<stdio.h>

int main(void)
{
    char name[] = "Redone Turzo";
    char Uni[] = "Green University of Bangladesh";

    printf("My Name is %s\n", name);
    printf("My University is %s\n\n", Uni);

    char yourN[30];
    char yourU[50];

    printf("Enter your name: ");
    scanf("%s", &yourN);
    printf("Enter your university: ");
    scanf("%s", &yourU);

    printf("Your Name is %s, you said\n", yourN);
    printf("Your University is %s, you said", yourU);

    return 0;
}
