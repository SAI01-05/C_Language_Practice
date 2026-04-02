#include <stdio.h>


int main()
{

    int num;
    printf("Enter the number\n");
    scanf("%d", &num);

    for (int i = 1; i <= num + (num - 1); i++)
    {
        printf("%d", i);
    }
    printf("\n");

    int count1 = num - 1;
    int count2 = 1;
    int count3 = num - 1;

    for (int i = 1; i <= num - 1; i++)
    {
        for (int j = 1; j <= count1; j++)
        {
            printf("%d", j);
        }
        count1 -= 1;

        for (int k = 1; k <= count2; k++)
        {
            printf(" ");
        }
        count2 += 2;

        int sai1 = num + i;
        for (int l = 1; l <= count3; l++)
        {

            printf("%d", sai1);
            sai1++;
        }
        count3 -= 1;

        printf("\n");
    }
}

/*
1234567
123 567
12   67
1     7

*/