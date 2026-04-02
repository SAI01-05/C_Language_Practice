#include<stdio.h>

void printing(int n)
{
    if (n==0)
    {
        return;
    }
    printing(n-1);
    printf("%d\n",n);
    return;
}

int main()
{
      int n;
      printf("Enter the number\n");
      scanf("%d",&n);
      printing(n);
      return 0;
}