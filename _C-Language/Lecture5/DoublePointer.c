#include <stdio.h>

int main()
{
      int a = 50;
      int *ptr = &a;
      int **ptr2 = &ptr;
      printf("The value present is %d\n",a);
      printf("The value present is %d\n",*ptr);
      printf("The value present is %d\n\n",**ptr2);


      printf("The address present is %p\n",&a);
      printf("The address present is %p\n",&ptr);
      printf("The address present is %p\n",ptr2);
      return 0;
}