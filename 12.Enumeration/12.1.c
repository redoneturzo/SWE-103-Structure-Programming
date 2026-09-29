//01. Write a program using enum

#include <stdio.h>

enum Level
{
    LOW,   // now low = 0, so the next increase with +1.if we define it as our wish like LOW = 5 so next we change by adding +1 as MEDIUM = 6, HIGH = 7 so on.
    MEDIUM,
    HIGH    //here not to use , coma
};

void main1(void);
void main2(void);
void main3(void);

int main()
{
    main1();
    printf("\n");
    main2();
    printf("\n");
    main3();

    return 0;

}

void main1()
{
    enum Level myVar = LOW;      // here myVar is a variable
    printf("%d", myVar);
}

void main2()
{
    enum Level myVar = MEDIUM;
    printf("%d", myVar);
}

void main3()
{
    enum Level myVar = HIGH;
    printf("%d", myVar);
}
