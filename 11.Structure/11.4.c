///4.C typedef
#include<stdio.h>
int main()
{
    typedef int age_of;///easier to read, and your code easier to maintain.
    // int turzo,muhammad,ibrahim,adam
    age_of Turzo = 21;
    age_of Muhammad = 10;
    age_of Ibrahim = 40;
    age_of Adam = 200;

    printf("%d\n", Turzo);
    printf("%d\n", Muhammad);
    printf("%d\n", Ibrahim);
    printf("%d\n", Adam);
    return 0;
}
