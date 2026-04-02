#include<stdio.h>
// In these i have practice for loop also and also a static variable .

    int myfun()
    {
        static int a=10;
        a++;
    }

    int seq()
    {
        static int i=0;
        i++;
    }

int main()
{
    int i=0;
    for (int j = 1; j < 5; j++)
    {
    printf("The value of position %d and %d is %d\n",j,seq(),myfun());
    // printf("The value of position %d and %d is %d\n",j,seq(),myfun());
    // printf("The value of position %d and %d is %d\n",j,seq(),myfun());
    // printf("The value of position %d and %d is %d\n",j,seq(),myfun());
    }
}