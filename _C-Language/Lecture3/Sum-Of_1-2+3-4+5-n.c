#include<stdio.h>

int main()  //1-2+3-4+5-6
{
      int num;
      printf("Enter upto which number you want to print\n");
      scanf("%d",&num);
      float sum;

     

      // for (int i = 1; i <=num; i++)
      // {
      //   if (i%2!=0)
      //   {
      //      sum=sum+i; 
      //   }
      //   else
      //   {
      //       sum=sum-i;
      //   }
        
      // }
      // printf("Sum is %d\n",sum);


      // if even (-n/2)
      // if odd (-n/2)+n

      int add;

      for (int i = 1; i < num; i++)
      {
            if (num%2==0)
            {
                 add=-(num/2);
            }
            else
            {
                  add=-(num/2)+num; 
            }

            
      }
         printf("add is %d\n",add);
      
}