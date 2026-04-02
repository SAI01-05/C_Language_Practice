#include<stdio.h>

void printing(int n)
{
    if (n==0)
    {
        return;
    }
    printf("%d\n",n);
    printing(n-1);
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