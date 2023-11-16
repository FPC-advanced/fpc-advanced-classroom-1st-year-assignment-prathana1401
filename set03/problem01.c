//Write a program to find the distance between 2 points
#include <stdio.h>
void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);
int main()
{
float x1,y1,x2,y2;
float distance;
input(&x1,&y1,&x2,&y2);
distance=find_distance(x1,y1,x2,y2);
output(x1,y1,x2,y2,distance);
return 0;
}
void input(float *x1, float *y1, float *x2, float *y2)
{
    printf("enter the coordinates of first point:\n");
    scanf("%f %f",x1,y1);
     printf("enter the coordinates of second point:\n");
    scanf("%f %f",x2,y2);
}
float find_distance(float x1, float y1, float x2, float y2)
{
  return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
void output(float x1, float y1, float x2, float y2, float distance)
{
    printf("the distance between (%f,%f) and (%f,%f) is %f\n",x1,y1,x2,y2,distance);
}
