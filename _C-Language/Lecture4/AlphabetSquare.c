#include<stdio.h>

int main()
{
      int num;
      printf("Enter the number\n");
      scanf("%d",&num);
     

    //   for (int i = 65;  i < 65+num; i++)
    //   {
    //     for (int j = 65; j <65+num; j++)
    //     {
    //       char ch=(char)j;
    //         printf("%c ",ch);
    //     }
    //     printf("\n");
    //   }

                // OR


    if (num>26)
    {
        printf("Tujya papa ni 26 chya pud alphabets pahile hote ka\n");
        
    }
    else
    {
      for (char i = (char)65;  i < 65+num; i++)
      {
        for (char j = (char)65; j <65+num; j++)
        {
          
            printf("%c ",j);
        }
        printf("\n");
        
      }
    }
}




/*
    A B C D
    A B C D
    A B C D
    A B C D
    
*/