#include<stdio.h>

int main()
{
    int length;
    printf("Enter the length\n");
    scanf("%d",&length);

    int breadth;
    printf("Enter the breadth\n");
    scanf("%d",&breadth);

    int area=length*breadth;                //l*b
    int perimeter=2*(length+breadth);       //2*(l+b)

    if (area>perimeter)
    {
       printf(" Area of rectangle is greater than perimeter");
    }
    else
    {
         printf(" perimeter of rectangle is greater than area");
    }
    
}