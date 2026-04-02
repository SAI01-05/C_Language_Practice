#include<stdio.h>
// This program is between 9 and 10 which is if else if statement
int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    printf("You have entered %d as your age\n.",age);
    
    if (age<=10)
    {
        printf("Your age is between 10 to 20");
    }
    else if(age<=20)
    {
        printf("Your age is between 20 to 30");
    }
    else if(age<=30)
    {
        printf("Your age is between 30 to 40");
    }
    else
    {
        printf("Your age is above 40");
    }
    
}
