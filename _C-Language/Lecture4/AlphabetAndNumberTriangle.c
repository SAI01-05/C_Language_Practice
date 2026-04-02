#include<stdio.h>

int main()
{
      int num;
      printf("Enter the number\n");
      scanf("%d",&num); 
      printf("\n");

      for (int i = 1; i <=num; i++)
      {
        if (i%2!=0)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%d ",j);
            }
        }
        else
        {
            for (int k = 64; k<64+i; k++)
            { 
                int ch=k+1;
                char ch1=(char)ch;
                printf("%c ",ch1);
               
            }
            
            
        }
        printf("\n");
        
      }
      
      
}

/*
     1
     A B
     1 2 3
     A B C D
     1 2 3 4 5

*/