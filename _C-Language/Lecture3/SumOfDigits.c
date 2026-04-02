#include<stdio.h>

int main()
{
      int num;   //1234
      printf("Enter the number\n");
      scanf("%d",&num);
      int sum=0;

      while (num>0)
      {
        int lastdigit=num%10;  //4  3  2  1
        sum=sum+lastdigit;  //4 +3+2+1
        num=num/10;    //123   12  1
      } 
      
      printf("The additiom of numbers is %d\n",sum);
}