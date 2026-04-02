#include<stdio.h>

int main()
{
      int num;
      printf("Enter the number\n");
      scanf("%d",&num);
      for (int i = 1; i <=num; i++)
      {
        for (int j = 1; j <=num; j++)
        {
            if (i==(num/2)+1 || j==(num/2)+1)
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
Num=5

    *
    *
* * * * *             
    * 
    *
   

Num=3

    *  
  * * *
    * 

    if && then it will provide the center point of given input
*/