#include<stdio.h>
void sum(int n,int sai)
{
      if (n==0)
      {
            printf("The addition is: %d",sai);
            return ;
      }
      
      return sum(n-1,sai+n);
}

int main()
{
      int n;
      printf("Enter the number: ");
      scanf("%d",&n);
      sum(n,0);
      return 0;
}