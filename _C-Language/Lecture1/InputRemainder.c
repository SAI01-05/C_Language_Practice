#include<stdio.h>

int main()
{   int divident,divisor,quetient;
    printf("Enter the divident\n");
    scanf("%d",&divident);
    printf("Enter the divisor\n");
    scanf("%d",&divisor);
    quetient=divident/divisor;
    printf("Remainder=%d",divident-(divisor*quetient));
} 