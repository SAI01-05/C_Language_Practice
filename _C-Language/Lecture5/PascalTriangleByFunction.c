#include <stdio.h>

int factorial(int x)
{
      int sai = 1;
      for (int i = 2; i <= x; i++)
      {
            sai *= i;
      }
      return sai;
}

int main()
{
      int num;
      printf("Enter the number\n");
      scanf("%d", &num);

      int sai = num;
      int ncr = 0;
      for (int i = 0; i <= num; i++)
      {
            for (int j = 1; j <= sai; j++)
            {
                  printf(" ");
            }
            sai--;

            for (int k = 0; k <= i; k++)
            {
                  ncr = factorial(i) / (factorial(k) * factorial(i - k));
                  printf("%d ", ncr);
            }
            printf("\n");
      }
}