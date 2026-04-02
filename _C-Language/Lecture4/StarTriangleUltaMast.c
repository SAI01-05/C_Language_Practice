#include<stdio.h>

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    int sai=num;

    for (int i = 1; i <=num; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <=sai; k++)
        {
             printf("* ");
        }
        sai-=1;
        printf("\n"); 
    }   
}

/*

****
 ***
  **
   *

*/