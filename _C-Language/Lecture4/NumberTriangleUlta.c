#include<stdio.h>

int main()
{
    int num;
      printf("Enter the number\n");
      scanf("%d",&num);
      int num2=num;

      for (int i = 1; i <= num; i++)
      {
        for (int j=1; j<=num2; j++)
        {
            printf("%d ",j);
        }
        num2--;
        printf("\n");
      }

    
      
      
      
}