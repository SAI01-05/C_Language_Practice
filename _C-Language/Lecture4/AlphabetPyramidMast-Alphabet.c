#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    int count = 3;
    int count1 = 1;
    int count2 = 3;

    for (int i = 1; i <= num + 3; i++)
    {
        char ch = (char)(i + 64);
        printf("%c", ch);
    }
    printf("\n");

    for (int i = 1; i <= num - 1; i++)
    {
        int a = 1;

        for (int j = 1; j <= count; j++)
        {

            char ch=(char)(a + 64);
            printf("%c", ch);
            a++;
        }
        count--;

        for (int k = 1; k <= count1; k++)
        {
            printf(" ");
            a++;
        }
        count1 += 2;

        for (int l = 1; l <= count2; l++)
        {
            char ch = (char)(a + 64);
            printf("%c", ch);
            a++;
        }
        count2--;

        printf("\n");
    }
}
/*
ABCDEFG
ABC EFG
AB   FG
A     G

*/