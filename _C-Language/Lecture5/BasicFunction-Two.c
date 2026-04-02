#include<stdio.h>

void australia()
{
      printf("I am in australia\n"); //6
      return;                        //7
}
void america()
{
      printf("I am in america\n"); //4
      australia();                  //5
      return;                       //8
}
void india()
{
    printf("I am in india\n");  //2
    america();                  //3
    return;                     //9
}
int main()
{
      india();  //1
      return 0; //10
}