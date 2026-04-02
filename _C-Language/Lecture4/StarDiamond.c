#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    int count = 1;

    for (int i = 1; i <= (num / 2); i++)
    {
        for (int j = 1; j <= ((num / 2) + 1) - i; j++)
        {
            printf("  ");
        }

        for (int k = 1; k <= count; k++)
        {
            printf("* ");
        }
        count = count + 2;
        printf("\n");
    }

    int sai = num;
    for (int i = 1; i <= (num / 2) + 1; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf("  ");
        }

        for (int k = 1; k <= sai; k++)
        {
            printf("* ");
        }
        sai -= 2;
        printf("\n");
    }
}

/*

   *
  ***
 *****
*******
 *****
  ***
   *

*/