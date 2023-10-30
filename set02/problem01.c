//Write a program to find the area of a triangle.
#include <stdio.h>
void input(float *base, float *height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);
int main()
{
float base,height,area;
input(&base,&height);
find_area(base,height,&area);
output(base,height,area);
return 0;
}
void input(float *base, float *height)
{
  printf("enter the base of the triangle:\n");
  scanf("%f",base);
printf("enter the height of the triangle:\n");
  scanf("%f",height);
}
void find_area(float base , float height, float *area)
{
 *area= 0.5 * base * height;
}
void output(float base, float height, float area)
{
   printf("The area of the traingle with base %f and height %f is %f\n ",base,height,area);
}