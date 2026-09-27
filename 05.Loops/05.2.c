//02. Write a program using do while loop

#include<stdio.h>

int main(void)
{
    int num = 0;   // must to be inatialized

    do
    {
        printf("%d\n", num);
        num++;
    }
    while(num <= 10);  // ; is must after the line

    return 0;
}
