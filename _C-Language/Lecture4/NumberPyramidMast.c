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
        for (int k = 1; k <=i; k++)
        {
           printf("%d ",k);
        }

        int count=i-1;
        for (int l = 1; l <= i-1; l++)
        {
           
            printf("%d ",count);
            count--;
        }
        
        
        printf("\n");
        
        
        
    }
    
}

/*

   1
  121 
 12321  
1234321


*/