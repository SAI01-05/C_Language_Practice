#include<stdio.h>
int factorial(int n)
{
      if (n==1 ||n==0)
      {
           return 1;
      }
      else
      {
            return n*factorial(n-1);
      }
    
}

int main()
{
      int n;
      printf("Enter the number\n");
      scanf("%d",&n);
      int num=factorial(n);
      printf("The factorial of %d is %d\n",n,num);
      return 0;
}