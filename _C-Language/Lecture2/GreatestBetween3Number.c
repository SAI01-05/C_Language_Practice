#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the first number\n");
    scanf("%d", &a);
    printf("Enter the second number\n");
    scanf("%d", &b);
    printf("Enter the third number\n");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("A is greater\n");
    }
    if (b > a && b > c)
    {
        printf("B is greater\n");
    }
    if (c > b && c > a)
    {
        printf("C is greater\n");
    }
}
