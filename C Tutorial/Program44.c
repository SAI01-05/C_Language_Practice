#include <stdio.h>

int main()
{
    typedef int *saipointer;
    saipointer a, b;
    int c = 17;
    a = &c;
    b = &c;
    printf("The value of a is %d\n", a);
    printf("The value of a is %d\n", b);
    // %d konta vapraicha ahe mahiti nai
}
