#include<stdio.h>
// Automatic variable  (not imp to write (auto) without it also it give correct output)

int myfunc(int a, int b)
{
    auto int sum;
    sum=a*b;
    return sum;
}

int main()
{
    int sai=myfunc(5,5);
    printf("The multiplication of a and b is %d\n",sai);
}