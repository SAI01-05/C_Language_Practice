#include<stdio.h>
            //2        4
int func(int base,int power)
{
      if (power==0)
      {
           return 1;
      }
      return base*func(base,power-1);
            //2*func(2,3)

            //   2*func(2,2)

            //     2*func(2,1)

            //       2*func(2,0)
}

int main()
{
      int base,power;
      printf("Enter the base:\n");
      scanf("%d",&base);
      printf("Enter the power:\n");
      scanf("%d",&power);
      int answer=func(base,power);
      printf("The %d raised to power %d is %d\n",base,power,answer);
      return 0;
}