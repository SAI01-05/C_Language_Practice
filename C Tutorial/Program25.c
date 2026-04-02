#include<stdio.h>

int main()
{
    int arr[]={23,24,25,26,27,28,29};
    printf("The value of array at position 3 is %d\n\n",arr[3]);/*answer will be 26*/

    printf("The address of first element of array is %d\n",&arr[0]);
    printf("The address of first element of array is %d\n\n",arr);

    printf("The address of second element of array is %d\n",&arr[1]);
    printf("The address of second element of array is %d\n\n",arr+1);

    printf("The value at address of first element of array is %d\n",*(&arr[0]));
    printf("The value at address of first element of array is %d\n",arr[0]);
    printf("The value at address of first element of array is %d\n\n",*(arr));

    printf("The value at address of second element of array is %d\n",*(&arr[1]) );
    printf("The value at address of second element of array is %d\n", arr[1] );
    printf("The value at address of second element of array is %d\n",*(arr+1) );


}