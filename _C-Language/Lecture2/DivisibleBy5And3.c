#include<stdio.h>

int main()
    {
        int num;
        printf("Enter the number\n");
        scanf("%d",&num);
        if (num%5==0 && num%3==0)
        {
            printf("It is divisible by 5 and 3\n");
        }
        else
        {
            printf("not divisible by 5 and 3\n");
        }
        
        
    }
