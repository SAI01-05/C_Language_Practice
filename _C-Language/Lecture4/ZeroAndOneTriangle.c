#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    int sai = 1;

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i+j)%2==0)
            {
                sai = 1;
            }
            else
            {
                sai = 0;
            }

            printf("%d ", sai);
        }
        
        printf("\n");
    }
}

/*

1
0 1
1 0 1
0 1 0 1




*/