#include<stdio.h>

// DO WHILE LOOP

int main()
{
    int num,sai=0;
    printf("Enter the number\n");
    scanf("%d", &num);

    do
    {
        printf("%d\n", sai+1);
        sai=sai+1;
    }
    while(sai<num);
}
