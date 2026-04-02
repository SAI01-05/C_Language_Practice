#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three umber\n");
    scanf("%d %d %d", &a, &b, &c); // 1 2 3

    if (a > b)
    {

        if (a > c)
        {
            printf("A is greater");
        }
    }

    else if (b > c)
    {
        if (b > a)
        {
            printf("B is greater");
        }
    }

    else
    {
        printf("C is greater");
    }
}