#include<stdio.h>

int main()
{
      int n;
      printf("Enter how much odd numbers you want from 1\n");
      scanf("%d",&n);

        int a=4;
      for (int i = 1; i <=n; i++)
      {
        printf("%d  ",a);
        a=a+3;
      }

      
}