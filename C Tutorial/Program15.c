#include<stdio.h>
// Continue statement

int main()
{
    int i,age;
    for ( i = 0;i<3; )
    {
        printf("%d\n Enter your age\n",i);
        scanf("%d", &age);
        if (age>18)
        {
            continue;
        }
        printf("You have not come across any continue");
        
    }
    return 0;   
}