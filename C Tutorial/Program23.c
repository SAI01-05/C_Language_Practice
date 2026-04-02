#include<stdio.h>

int main()
{
    int ptra=NULL;
    int* A=&ptra;
    printf("The address of a is %p\n",ptra);
    printf("The address of a is %p\n",*A);
}