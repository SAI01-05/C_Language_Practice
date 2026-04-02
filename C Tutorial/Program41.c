#include<stdio.h>
#include<string.h>
// Structure in c

    struct student
    {
        int id;
        int marks;
        char fav_char;
        char name[34];
    };


int main()
{ 
    struct student sai,viki;
    strcpy(viki.name,"sai the student of the year");
    printf("viki's name is:%s\n",viki.name);

}
