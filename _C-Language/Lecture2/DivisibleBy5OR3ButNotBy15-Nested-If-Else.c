#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    // if (num % 5 == 0 || num % 3 == 0)
    // {
    //     if (num % 15 != 0)
    //     {
    //         printf("Number is divisible by 5 or 3 and not by 15");
    //     }
    //     else
    //     {
    //         printf("Number is divisible by 5 or 3 and also by 15");
    //     }
    // }


                        // OR

        if ((num%3==0 || num%5==0) && num%15!=0)
        {
            printf("Divisible by 5 or 3");
        }
        else
        {
            printf("Divisible by 15");
        }
        

  
}