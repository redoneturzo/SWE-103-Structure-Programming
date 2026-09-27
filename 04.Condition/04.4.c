//04. Write a program using switch statements to display a menu: 1 for Add, 2 for Subtract, 3 for multiply and 4 for Division.

#include<stdio.h>

int main(void)
{
    int choice;

    printf("Enter 1 for Add\n");
    printf("Enter 2 for Subtract\n");
    printf("Enter 3 for Multiply\n");
    printf("Enter 4 for Divide\n");
    printf("Enter you choice(1 to 4): ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1 :
            printf("You selected Add");
            break;
        case 2 :
            printf("You selected Subtract");
            break;
        case 3 :
            printf("You selected Multiply");
            break;
        case 4 :
            printf("You selected Divide");
            break;
        default:
            printf("Invalid Choice");
    }

    return 0;
}
