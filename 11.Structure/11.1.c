///1.Create a Structure
#include<stdio.h>

struct mySelf{ /// struct mySelf data type creation
char myName;       /// member declar
int myAge;          /// member declar
int myBirth;         /// member declar
};
int main()
{
    struct mySelf A1;   /// variable declar
    A1.myName = 'R';        /// value assign
    A1.myAge = 21;
    A1.myBirth = 2006;

    printf("%c ", A1.myName);    ///print value
    printf("%d ", A1.myAge);
    printf("%d", A1.myBirth);
    ///printf("%????", S1);   /// there are no data specifier in C to print directly structure

    return 0;
}
