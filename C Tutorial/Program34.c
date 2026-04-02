#include<stdio.h>


void saihalwai (char str[])
{
    int i=0;
    while (str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
    
}

int main()
{
    printf("Name the word you want to save to your string using different methods\n");

    char str[34];
    gets (str);
    printf("\nUsing printf:- %s\n",str);     /*First method of calling*/



    printf("\nUsing puts:-");
    puts (str);                            /*Second method of calling*/



    printf("\nUsing custom function saihalwai (char str[])\n");
    saihalwai (str);                                                        /*Third method of calling*/
    printf("\n");

    
}
