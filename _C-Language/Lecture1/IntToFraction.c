#include<stdio.h>

int main()
{
    float fraction;
    printf("Enter the fraction number\n");
    scanf("%f",&fraction);
    int decimal=fraction;
    float result=fraction-decimal;
    printf("The fraction of %f is %f",fraction,result);
}