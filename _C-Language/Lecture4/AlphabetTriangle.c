#include<stdio.h>

int main()
{
      int num;
      printf("Enter the number\n");
      scanf("%d",&num);

      for (int i = 65; i <(65+num); i++)
      {
        for (int j = 65; j <=i; j++)
        {
            char ch=(char)j;
            printf("%c ",ch);
        }
        printf("\n");
        
      }
      
      
}

/*
    A
    A B
    A B C
    A B C D
*/