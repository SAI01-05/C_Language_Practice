#include<stdio.h>

int main()
{
      int number;
      printf("Enter the number\n");
      scanf("%d",&number);    //1234

      int reverse=0;

       while(number>0)
       {
            reverse=reverse+(number%10);   //0+4=4                      40+3=43             430+2=432           4320+1=4321
            reverse=reverse*10;             //4*10=40                   43*10=430           432*10=4320         4321*10=43210
            number=number/10;               //1234/10=123               123/10=12           12/10=1             1/10=0

       }
      // reverse= 43210

      //reverse=43210/10;
      //reverse=4321

      reverse=reverse/10;

       printf("the reverse of digit's is %d\n",reverse);
     
}