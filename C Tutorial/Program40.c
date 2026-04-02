#include<stdio.h>
// Structures in c.
struct students
{
    int id;
    int marks;
    char fav_char

};


int main()
{
    struct students sai,viki,vedant;
    sai.id=1;
    sai.marks=25;
    sai.fav_char='k';
    viki.id=2;
    viki.marks=65;
    viki.fav_char='J';
    vedant.id=3;
    vedant.marks=84;
    vedant.fav_char='A';
    printf("Sai got %d marks.\n",sai.marks);
    printf("viki's id is %d.\n",viki.id);
    printf("vedant's favourite character is %c.\n",vedant.fav_char);  
}