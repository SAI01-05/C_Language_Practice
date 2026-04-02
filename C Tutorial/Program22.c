#include<stdio.h>

int main()
{
    printf("Lets learn about pointer\n");
        int a=25;
        int *ptra= &a;
        // By the below 5 printf we can get the value of 'a' with the help of pointer.
        // printf("The adress of pointer to the a is %p\n",&ptra);
        // printf("The adress of pointer to the a is %p\n",&a);
        // printf("The adress of pointer to the a is %p\n",ptra);
        printf("The adress of pointer to the a is %d\n",*ptra);
        printf("The adress of pointer to the a is %d\n",a);

        return 0;
}