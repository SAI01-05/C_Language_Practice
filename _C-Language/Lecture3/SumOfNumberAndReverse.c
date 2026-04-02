#include<stdio.h>

int main()
{
      
     int num;           //1234
     printf("Enter the number\n");
     scanf("%d",&num);
     int num1=num;
     int reverse=0;

     while (num>0)
     {
        reverse=reverse*10;
        reverse=reverse+(num%10);

        num=num/10;

     }
       int result=num1+reverse;

     printf("The addition of num and reverse is %d",result);
     
}