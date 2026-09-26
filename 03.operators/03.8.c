//3. Write a C program to demonstrate the post-increment (++) and post-decrement (--) operators.

#include<stdio.h>

int main()
{
    int a = 1;
    printf("Post Increment = %d\n", a++); //a++ → আগে 1 print হবে, তারপর a এর value 1 বাড়বে।
    printf("Post Decrement = %d\n", a--); //a-- → আগে 2 print হবে, তারপর a এর value 1 কমবে।
    return 0;

}
