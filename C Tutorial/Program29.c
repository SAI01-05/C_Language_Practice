#include<stdio.h>

// By declaring the pointer in function base address of array.

int func2(int * ptrn)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value of index %d is %d\n",i,ptrn[i]);
    }
    
}

int main()
{
    int array[]={25,75,48,62};
    func2(array);
}