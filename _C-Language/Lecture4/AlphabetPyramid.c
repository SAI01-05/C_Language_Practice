#include<stdio.h>

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    int count=1;

    for (int i = 1; i <= num; i++)
    {
       for (int j = 1; j <= num-i; j++)
       {
            printf("  ");
       }
       for (int k = 1; k <=count; k++)
       {
            char ch=(char)(k+64);
            printf("%c ",ch);
       }
       count=count+2;
       printf("\n");
       
    }
    


      
}
/*
   A
  ABC
 ABCDE
ABCDEFG   
*/