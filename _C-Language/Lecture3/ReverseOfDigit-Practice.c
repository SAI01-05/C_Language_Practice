#include<stdio.h>

int main()
{
     int n;     //1234
     printf("Enter the number\n");
     scanf("%d",&n);
     int reverse=0;

     while (n>0)
     {
            reverse=reverse*10;
            reverse=reverse+(n%10);
            n=n/10;
     }      
     
         printf("Reverse=%d",reverse);

}