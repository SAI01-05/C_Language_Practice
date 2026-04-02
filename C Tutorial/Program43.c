#include <stdio.h>

typedef struct student
{
    int id;
    char fav_char;
    char name[34]

} viki;

int main()
{
    viki s1, s2;
    s1.id = 25;
    s2.fav_char = 's';
    printf("The id of s1 is %d\n", s1.id);
    printf("The fav_char of s2 is %c\n", s2.fav_char);
}
