#include<stdio.h>
#include<string.h>

int main()
{
    // strcpy()= 'This functionm is used to copy one string into another'.
    char g1[]="Viki";
    char g2[]="Pawar";
    char g3[34];

    strcpy(g3,strcat(g1,g2));
    puts (g3);
    
}
