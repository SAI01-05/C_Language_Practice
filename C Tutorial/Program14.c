#include<stdio.h>

// Break statement
int main()
{
    int i,age;
    for(i=1;i<5;)
    {
        printf("%d\nEnter your age\n",i);
        scanf("%d",&age);
        if (age>10)
        {
            break;
        }
        
    }
}