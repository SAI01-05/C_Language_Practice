#include<stdio.h>
int myfunc (int x,int y)
{
    static  int myvar;
    myvar++;
    printf("The myvar is %d\n",myvar);
    return myvar;
}

int main()
{
    int myvar= myfunc (3,5);
        myvar= myfunc (3,5);
        myvar= myfunc (3,5);
}
