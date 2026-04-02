#include<stdio.h>

/*(0,0)=origin
  (1,0)=X axis
  (0,1)=Y axis
  (1,1)=Not x ,y
*/

int main()
{
      int point1,point2;
      printf("Enter two points\n");      
      scanf("%d %d",&point1,&point2);
      if (point1==0 && point2==0)
      {
        printf("point lies on origin\n");
      }
      else if (point1==0)
      {
        printf("Lies on y axis\n");
      }
      else if (point2==0)
      {
        printf("Lies on x axis\n");
      }
      else
      {
        printf("Not lies on x and y\n");
      }
      
      
     
}