#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    int sai=3;
    for (int i = 1; i <=num; i++)
    {
       for (int j = 1; j <=(num+sai); j++)
       {
          if ((i+j)>num)
          {
             printf("*");
          }
          else
          {
            printf("  ");
          }
          
       }
          sai--;
       printf("\n");
       
    }
    
    
}

/*

   ****
  ****
 ****
****


*/