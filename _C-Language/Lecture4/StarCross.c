#include<stdio.h>

int main()
{
      int num;
      printf("Enter the number\n");
      scanf("%d",&num);
      
      for (int i = 1; i <=num; i++)
      {
        for (int j = 1; j <= num; j++)
        {
            if ((i-j)==0  || (i+j)==num+1)
            {
                printf("* ");
            } 
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        
      }
      
}

/*
 
*        *
  *    *
     * 
  *    * 
*        *



 *    *
    * 
  *    * 

*/