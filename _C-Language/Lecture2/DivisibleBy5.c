#include<stdio.h>

int main()
{
    int num;
    printf("Enter number\n");
    scanf("%d",&num);
    if (num%5==0)
    {
        printf("Number divisible by 5");
    }
    else
    {
        printf("Not divisible by 5");
    }
    
}