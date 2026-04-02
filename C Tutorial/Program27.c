#include<Stdio.h>

// Call by reference

void changevalue(int *address)
{
    *address=200;
}

    void valuechange(int* valueofB)
    {
           *valueofB=300;   
    }

    void  valueofC(int *c)
    {
        *c=3000;
    }

int main()
{
    int a=34,b=56,c=1000;
    printf("The value of A is now:%d\n",a);
    printf("The value of B is now:%d\n",b);
    changevalue(&a);
    printf("The value of A is now:%d\n",a);
    valuechange(&b);
    printf("The value of B is now:%d\n",b);
    valueofC(&c);
    printf("The value of C is now :%d\n",c);

}