#include <stdio.h>

int main()
{
      int num;
      printf("Enter the number\n");
      scanf("%d", &num);

      int a = 0;
      for (int i = 1; i <= num + (num - 1); i++)
      {
            if (i <= num)
            {
                  a++;
                  printf("%d", i);
            }
            else
            {
                  a--;
                  printf("%d", a);
            }
      }
      printf("\n");

      int nsp = 1;
      int b = 1;
      int count = num - 1;
      int count2 = num - 1;
      for (int i = 1; i <= num - 1; i++)
      {
            for (int j = 1; j <= count; j++)
            {
                  printf("%d", b);
                  b++;
            }

            count -= 1;

            for (int k = 1; k <= nsp; k++)
            {
                  printf(" ");
            }
            nsp += 2;

            for (int l = 1; l <= count2; l++)
            {
                  --b;
                  printf("%d", b);
            }
            count2 -= 1;

            printf("\n");
      }
}
/*

1234321
123 321
12   21
1     1

*/