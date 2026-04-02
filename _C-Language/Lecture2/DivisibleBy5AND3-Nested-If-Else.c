#include<stdio.h>

int main()
{
      int num;
      printf("Enter the number\n");
      scanf("%d",&num);
      if (num%5==0 )
      {
        if (num%3==0)
        {
           printf("Number is divisible by 5 and 3\n");

        }
        else
        {
            printf("Number is divisible by 5 but not divisible by 3 ");
        }
        
      }


      else if (num%3==0)
      {
        if (num%5==0)
        {
            printf("Number is divisible by 5 and 3\n");
        }
        else
        {
            printf("Number is divisible by 3 but not divisible by 5 ");
        }   
      }


      else
      {
        printf("Number is not divisible by 3 and not divisible by 5");
      }
      
      
      


      
}