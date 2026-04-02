#include<stdio.h>

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    int min=0;

    for (int i = 1; i <=(2*num)-1; i++)
    {
       for (int j = 1; j <= (2*num)-1; j++)
       {
           int a=i;
           if (i>num)
           {
              a=2*num-i;
           }

           int b=j;
           if (b>num)
           {
              b=2*num-j;
           }
            
            if (a<b)
            {
              min=a;
            }
            else
            {
              min=b;
            }
              // int max=num+1-min;
              // For real pattern of question print the above value in printf
            printf("%d",min);
            
            
       }
       printf("\n");
       
    }
      
      
}

/*

input=4

  1234567
1 4444444
2 4333334
3 4322234
4 4321234
5 4322234 
6 4333334
7 4444444


*/