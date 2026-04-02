// slope of 2 (A and B) points (y2-y1)\(x2-x1)=m1
// slope of 2 (B and c) points (y3-y2)\(x3-x2)=m2

#include<stdio.h>

int main()
{
      int x1,y1,x2,y2,x3,y3,m1,m2;  //1 2 3 4 5 6  Straight line
      printf("Enter the 2 points of point A\n");
      scanf("%d%d",&x1,&y1);
      printf("Enter the 2 points of point B\n");
      scanf("%d%d",&x2,&y2);
      printf("Enter the 2 points of point C\n");
      scanf("%d%d",&x3,&y3);

      m1=(y2-y1)/(x2-x1);
      m2=(y3-y2)/(x3-x2);

      printf("The value of slope 1 and slope 2 is\n");
      printf("%d\n",m1);
      printf("%d\n",m2);

      if (m1==m2)
      {
        printf("Given points are in straight line");
      }
      else
      {
        printf("Given points are not in straight line");
      }
      
      
}