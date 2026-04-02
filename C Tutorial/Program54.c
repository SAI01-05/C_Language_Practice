#include<stdio.h>
//   Extern variable:Extern keyword

int myfunc(int a,int b)
{
    extern  int sai;
    return sai;
}
int sai=343;

int  main()
{
        int sum=myfunc(2,2);
        printf("The sum of a and b is %d\n",sum);
}