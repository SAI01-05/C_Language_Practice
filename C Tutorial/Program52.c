#include <stdio.h>
#include <stdlib.h>
// Use of malloc,calloc,realloc and free

int main()
{
    // Use of malloc . if we take array 5 but start from i=1 the we can see that value 0 will get garbage value
    // int *ptr;
    // int n;
    // printf("Enter the size of array you want to create\n");
    // scanf("%d", &n);
    // ptr = (int *)malloc(n * sizeof(int));
    // for (int i = 1; i < n; i++)
    // {
    //     printf("Enter the value no %d of this array\n", i);
    //     scanf("%d", &ptr[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("The value at %d of this array is %d\n", i, ptr[i]);
    // }




    // Use of calloc . if we take array 5 but start from i=2 the we can see that value at position 0 and 1 will get 0 value.
    // int *sai; 
    // int c;
    // printf("Enter the number of array you want to create\n");
    // scanf("%d",&c);
    // sai=(int *)calloc (c, sizeof (int) );
    // for (int s = 2; s < c; s++)
    // {
    //     printf("Enter the value of position %d of array\n",s);
    //     scanf("%d",&sai[s]);
    // }
    // for (int i = 0; i < c; i++)
    // {
    //     printf("The value at position %d of array is %d\n",i,sai[i]);
    // }
    



    // Use of realloc . in line 58 if i take viki[i] the it gives number output but if i give viki then it gives garbage value
    // int *viki;
    // int v;
    // printf("Enter the size of new array you want to create\n");
    // scanf("%d",&v);
    // viki=(int *)realloc (viki, v*sizeof (int));
    // for (int k = 0; k < v; k++)
    // {
    //     printf("Enter the new value of position %d of array\n",k);
    //     scanf("%d",&viki[k]);
    // }
    // for (int i = 0; i < v; i++)
    // {
    //     printf("The value at position %d of array is %d\n",i,viki[i]);
    // }
    
    

    // Use of free 
    //  int *viki;
    // int v;
    // printf("Enter the size of new array you want to create\n");
    // scanf("%d",&v);
    // viki=(int *)realloc (viki, v*sizeof (int));
    // for (int k = 0; k < v; k++)
    // {
    //     printf("Enter the new value of position %d of array\n",k);
    //     scanf("%d",&viki[k]);
    // }
    // for (int i = 0; i < v; i++)
    // {
    //     printf("The value at position %d of array is %d\n",i,viki[i]);
    // }
    // free(viki);
}
