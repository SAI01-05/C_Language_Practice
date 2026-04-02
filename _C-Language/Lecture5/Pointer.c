#include<stdio.h>

int main()
{
      int a=50;
      int *ptr=&a;
      printf("The value of a is:%d\n",a);
      printf("The address of a is:%p\n",ptr);
      printf("The address of ptr pointer is:%p\n",&ptr);
      printf("The value in pointer is:%d\n",*ptr);

      
      *ptr=40;
      printf("The value in pointer is:%d\n",*ptr);
      return 0;
}