#include<stdio.h>

int main()
{
      int num;
      printf("Enter the number\n");
      scanf("%d",&num);
      int sai=1;

      for (int i = 1; i <= num; i++)
      {
        for (int j = 1; j<= i; j++)
        {
           printf("%d ",sai);
           sai++;
        }
        printf("\n");
            
        
        
      }
      
      
}
/*

1
2 3
4 5 6
7 8 9 10

*/