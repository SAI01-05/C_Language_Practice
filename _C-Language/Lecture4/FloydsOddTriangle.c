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
           sai=sai+2;
        }
        printf("\n");
            
        
        
      }
      
      
}

/*

1
3 5
7 9 11




*/