#include<stdio.h>
#include<string.h> 
/*This is an example of structure for understand the next concept union because it is similar to both of them*/
// It gives output for all the types but union gives output for only 1 type and corrupt all the other types.

struct student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};

int main()
{
    struct student s1;
    s1.id=1;
    s1.marks=45;
    s1.fav_char='u';
    strcpy(s1.name,"sai");

    printf("The id is %d\n",s1.id);
    printf("The marks is %d\n",s1.marks);
    printf("The fav_char is %c\n",s1.fav_char);
    printf("The name is %s\n",s1.name);
}