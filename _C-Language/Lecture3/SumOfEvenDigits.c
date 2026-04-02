#include<stdio.h>

int main()
{
      int n;                              //123456
      printf("Enter the number\n");
      scanf("%d",&n);
      int sum=0;


      while (n>0)
      {
        int lastdigit=n%10;    //6  5  4  3  2  1
        if (lastdigit%2==0)    //6     4     2
        {
           sum=sum+lastdigit;     //6 + 4  + 2
        }
        
        n=n/10;                 // 123456/10= 12345
      }
      
      printf("The addition of the even number is %d\n",sum);
}