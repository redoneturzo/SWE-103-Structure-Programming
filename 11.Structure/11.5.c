///5.typedef with struct
#include<stdio.h>

typedef struct mySelf{
char myName;
int myAge;
int myBirth;
} mySelf;
int main()
{
    mySelf A1 = {'R', 21, 2006};
    mySelf A2 = {'T', 22, 2007};
    mySelf A3 = {'U', 23, 2008};

    printf("%c %d %d\n", A1.myName,A1.myAge,A1.myBirth);
    printf("%c %d %d\n", A2.myName,A2.myAge,A2.myBirth);
    printf("%c %d %d\n", A3.myName,A3.myAge,A3.myBirth);

    return 0;
}
