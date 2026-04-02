#include<stdio.h>
// NESTED IF
int main()
{
    int age,marks;
    printf("Enter your age\n");
    scanf("%d",&age);

    printf("Enter your marks\n");
    scanf("%d", &marks);



    switch(age)
    {
        case 3:
        printf("Your age is 3\n");
        switch(marks)
        {
            case 36:
            printf("You are passed\n");

            case 35:
            printf("You are failed\n");

        }
        break;

        case 23:
        printf("Your age is 23\n");
        break;

        default:
        printf("The age is not 3 and 23");
    }    
}
