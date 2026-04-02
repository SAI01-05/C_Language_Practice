#include<stdio.h>
int sum(int n)
{
    if (n==1 || n==0)
    {
        return n;
    }

    return n+sum(n-1);
    
}

int main()
{
     int n;
     printf("Enter the number\n"); 
     scanf("%d",&n);
     printf("The answer is %d\n",sum(n));
      return 0;
}