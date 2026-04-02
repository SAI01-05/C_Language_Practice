#include<stdio.h>
#include<string.h>
// This is an example of union.

union student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};


int main()
{
    union student k1;
    strcpy(k1.name,"sai");
    k1.id=1;
    k1.marks=48;                                       /*Yat jo last la position gheil tyacha ha correct output dakhval*/
    k1.fav_char='k';

    printf("The id is %d\n",k1.id);
    printf("The name is %s\n",k1.name);
    printf("The marks is %d\n",k1.marks);
    printf("The fav_char is %c\n",k1.fav_char);

}