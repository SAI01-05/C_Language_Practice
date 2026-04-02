#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num-i; j++)
        {
           printf("  ");
        }
        for (int k = 1; k <= i; k++)
        {
            char ch=(char)(k+64);
           printf("%c ",ch);
        }
        printf("\n");
        
    }
    
    

   
}
/*

   A
  AB
 ABC
ABCD
*/