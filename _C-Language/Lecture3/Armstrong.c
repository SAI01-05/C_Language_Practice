#include<stdio.h>
#include<math.h>

int main()  //153
{
   
      int num;
      printf("enter the number\n");     
      scanf("%d",&num);
      int originalnumber=num;
      int remainder;
      int result=0;
      
        while (originalnumber!=0)
        {
           int remainder=originalnumber%10;
           result+= pow(remainder,3);
           originalnumber/=10;
            

        }
        if (result==num)
        {
            printf("The number is armstrong\n");
        }
        else
        {
            printf("Number is not armstrong\n");
        }
        
        
        


      
      
}