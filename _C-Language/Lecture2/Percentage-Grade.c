#include <stdio.h>

int main()
{

    int marks;
    printf("Enter your marks\n");
    scanf("%d", &marks);

    if (marks > 90)
    {
        printf("A grade");
    }
    else if (marks > 70)
    {
        printf("B grade");
    }
    else if (marks > 40)
    {
        printf("c grade");
    }
    else
    {
        printf("D garde");
    }
}