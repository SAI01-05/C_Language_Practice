#include<stdio.h>
struct Driver
{
    char name[34];
    char DlNo[45];
    char Route[47];
    int kms;
};

int main()
{
    struct Driver d1,d2,d3;
    printf("Enter details of drivers\n");

    // This is for 1st driver
    printf("Enter the name of first driver\n");
    scanf("%s",&d1.name);
    printf("Enter the DlNo of first driver\n");
    scanf("%s",&d1.DlNo);
    printf("Enter the route for first driver\n");
    scanf("%s",&d1.Route);
    printf("Enter the number of kms of first driver\n");
    scanf("%s",d1.kms);


    // This is for 2nd driver
    printf("\n\nEnter the name of second driver\n");
    scanf("%s",&d2.name);
    printf("Enter the DlNo of second driver\n");
    scanf("%s",&d2.DlNo);
    printf("Enter the route for second driver\n");
    scanf("%s",&d2.Route);
    printf("Enter the number of kms of second driver\n");
    scanf("%s",d2.kms);


    // This is for 3rd driver
    printf("\n\nEnter the name of third driver\n");
    scanf("%s",&d3.name);
    printf("Enter the DlNo of third driver\n");
    scanf("%s",&d3.DlNo);
    printf("Enter the route for third driver\n");
    scanf("%s",&d3.Route);
    printf("Enter the number of kms of third driver\n");
    scanf("%s",d3.kms);





    // Output for 1st driver
    printf("\n\n***Printing information of 1st drivers***\n");
    printf("For driver no 1:\n Name is %s\n",d1.name);
    printf("DL number is %s\n",&d1.DlNo);
    printf("Route is %s\n",d1.Route);
    printf("Kms is %d\n",d1.kms);


     // Output for 2nd driver
    printf("\n\n***Printing information of 2nd drivers***\n");
    printf("For driver no 2:\n Name is %s\n",d2.name);
    printf("DL number is %s\n",&d2.DlNo);
    printf("Route is %s\n",d2.Route);
    printf("Kms is %d\n",d2.kms);



     // Output for 3rd driver
    printf("\n\n***Printing information of 3rd drivers***\n");
    printf("For driver no 3:\n Name is %s\n",d3.name);
    printf("DL number is %s\n",&d3.DlNo);
    printf("Route is %s\n",d3.Route);
    printf("Kms is %d\n",d3.kms);


    return 0;
    
}
