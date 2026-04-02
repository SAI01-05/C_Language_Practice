#include <stdio.h>

int main()
{

    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    int sai = num - 1;
    int sai2 = 1;
    int sai3 = num;

    for (int i = 1; i <= 2*num-1 ; i++)
    {
        printf("*");
    }
    printf("\n");

    for (int i = 1; i <= num - 1; i++)
    {
        for (int j = 1; j <= sai; j++)
        {
            printf("*");
        }
        sai -= 1;
       

        for (int k = 1; k <= sai2; k++)
        {
            printf(" ");
        }
        sai2 += 2;
         
        for (int l = 1; l <= sai3 - 1; l++)
        {
            printf("*");
        }
        sai3 -= 1;

        printf("\n");
    }
     
}
/*
*******
*** ***
**   **
*     *

*/