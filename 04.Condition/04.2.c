//02. Write a program to assign grades based on marks using if-else, else-if condition

#include<stdio.h>

int main(void)
{
    int mark = 30;

    if(mark >= 80 && mark <= 100)
    {
        printf("A+");
    }
    else if(mark >= 75 && mark < 80)
    {
        printf("A");
    }
    else if(mark >= 70 && mark < 75)
    {
        printf("A-");
    }
    else if(mark >= 65 && mark < 70)
    {
        printf("B+");
    }
    else if(mark >= 60 && mark < 65)
    {
        printf("B");
    }
    else if(mark >= 50 && mark < 60)
    {
        printf("C");
    }
    else if(mark >= 40 && mark < 50)
    {
        printf("D");
    }
    else
    {
        printf("F");
    }

    return 0;
}
