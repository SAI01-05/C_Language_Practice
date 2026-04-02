#include<Stdio.h>

void arrayRev(int sai[])
{
    int temp;
    for (int  i = 0; i < 7/2; i++)
    {
        temp=sai[i];
        sai[i]=sai[6-i];
        sai[6-i]=temp;

    }
    
}
void arrayPrint (int sai[])
{
    for (int i = 0; i < 7; i++)
    {
        printf("The value of element %d is %d\n",i,sai[i]);
    }
}
int main()
{
    int sai[]={1,2,3,4,5,6,7};
    // printf("\nBefore reversing the array\n");
    // arrayPrint(sai);
    arrayRev(sai);
    printf("\nAfter reversing array\n");
    arrayPrint(sai);
}