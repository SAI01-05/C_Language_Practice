#include<stdio.h>
void swap(int *a,int* b)
{
      int temp;
      temp=*a;
      *a=*b;
      *b=temp;
}

int main()
{
      int a,b;
      printf("Enter the two numbers\n");
      scanf("%d%d",&a,&b);

      printf("Before swapping the values of a:%d and b:%d\n",a,b);
      printf("Ater swapping \n");
      swap(&a, &b);
      printf("After swapping the values of a:%d and b:%d\n",a,b);
      

      return 0;
}