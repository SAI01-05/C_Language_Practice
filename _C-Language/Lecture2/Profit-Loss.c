#include<stdio.h>

int main()
{   
    int costprice;
    printf("Enter the cost price\n");
    scanf("%d",&costprice);

    int sellingprice;
    printf("Enter the selling price\n");
    scanf("%d",&sellingprice);

    if (costprice>sellingprice)
    {
        printf("loss\n");
        printf("The loss is %d\n",(sellingprice-costprice));
    }
    else
    {
        printf("profit\n");
        printf("Profit is %d\n",(sellingprice-costprice ));
    }
    
    
    
    
}