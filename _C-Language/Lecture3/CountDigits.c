#include<stdio.h>

int main()
{
      int num;
      int count=0;
      printf("Enter the number\n");
      scanf("%d",&num);

      while(num>0)
      {
        num=num/10;
        count=count+1;
      }

      printf("The digits are %d\n",count);
      
}