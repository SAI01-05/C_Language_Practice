#include<stdio.h>
int main()
{
    //   int num=65;
    // int x=65;
    // int num=(char)x;  //typecasting
    //   printf("%c",num);
      
    //   for (int i = 65; i <= 90; i++)
    //   {
    //     char ch=(char)i;  //Typecasting
    //     printf("The ASCII value of %c is %d\n",ch,i);
    //   }
      
      for (char ch = (char)65; ch <= 90; ch++)
      {
        int num=(int)ch;
        printf("The ascii value of %c is %d\n",ch,num);
      }
      
}