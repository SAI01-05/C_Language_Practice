#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the first side of triangle\n");
    scanf("%d", &a);
    printf("Enter the second side of triangle\n");
    scanf("%d", &b);
    printf("Enter the third side of triangle\n");
    scanf("%d", &c);

    if ((a+b)>c && (b+c)>a && (a+c)>b)
    {
        printf("valid triangle");
    }
    else
    {
        printf("Invalid triangle");
    }
}
