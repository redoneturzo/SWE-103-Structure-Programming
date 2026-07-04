///2.Create a Structure and assigning value in shortcut
#include<stdio.h>

struct mySelf{ /// struct mySelf data type creation
char myName;       /// member declar
int myAge;          /// member declar
int myBirth;         /// member declar
};
int main()
{
    struct mySelf A1 = {'R', 21, 2006};


    printf("%c %d %d", A1.myName, A1.myAge, A1.myBirth);

    return 0;
}
