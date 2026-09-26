//08. Write a C program to print the ASCII value of a character entered by the user.

#include<stdio.h>

int main()
{
    char character;
    printf("Enter character :");
    scanf("%c", &character);
    int ASCII = character; // C-তে character-এর ASCII value পেতে সরাসরি character-কে int হিসেবে ব্যবহার করতে হবে
    printf("ASCII value = %d ",ASCII);
    return 0;
}
