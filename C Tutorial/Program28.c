#include<stdio.h>

// By declaring array as parameter in function.

    int func1(int viki[])
    {
        for (int i = 0; i < 8; i++)
        {
            printf("The value of %d is %d\n",i,viki[i]);
        }
        
    }


int main()
{
    int sai[]={15,45,85,76,55,24,26,96};
    printf("The value at index 0 is %d\n",sai[3]);
    printf("\n");
    func1(sai);
    printf("\n");
    printf("The value at index 0 is %d\n",sai[7]);

}