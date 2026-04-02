#include<stdio.h>

int main()
{
      int num;
      printf("Enter the number\n");
      scanf("%d",&num);
      int sum=1;

      for (int i = 1; i <= num; i++)
      {
        for (int j = 1; j <= sum; j=j+2)
        {
           printf("%d ",j);
        }
        sum=sum+2;

        printf("\n");
        
      }

      /*
            1
            1  3
            1  3  5 
            1  3  5  7
      */
      
     
}