#include<stdio.h>
// Go to statement

int main()
{
    // label:
    //     printf("We are inside label\n");
    //     printf("We are between label and end\n");
    //     goto end;

    //     printf("We are between label and end");
    //     printf("We are between label and end");
    //     printf("We are between label and end");
    //     printf("We are between label and end");
    //     end:
    //         printf("We are at end");



                                                    // ANOTHER PROGRAM
    
    int num;
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n",i);  
        for (int  j = 0; i < 8; i++)
        {
            printf("Enter the number .enter 0 to exit\n");
            scanf("%d",&num);
            if (num==0)
            {
                goto End;
            } 
        }      
    }
    End:
    printf("We are exist");
}

    