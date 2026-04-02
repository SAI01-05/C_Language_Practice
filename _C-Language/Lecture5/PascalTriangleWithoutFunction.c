#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    int sai = num;

    for (int i = 0; i <= num; i++)
    {
        for (int k = 1; k <= sai; k++)
        {
            printf(" ");
        }
        sai--;
        int first = 1;
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", first);
            first = first * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}