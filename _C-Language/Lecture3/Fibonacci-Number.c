#include<stdio.h>

int main()
{
      int num;
      printf("Tak bhau number\n");
      scanf("%d",&num);
      int a=1;
      int b=1;
      int sum=1;

      for (int i = 3; i <=num; i++)
      {
        sum=a+b;
        a=b;
        b=sum;        
        printf("The %dth Fibonacci number is %d\n",i,sum);

      }
    //   printf(" %d",sum);
      
      
}