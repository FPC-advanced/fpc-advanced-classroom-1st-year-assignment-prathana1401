//Write a program to find the area of a triangle
#include <stdio.h>
typedef struct _triangle {
	float base, altitude, area;
} Triangle;
Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);
int main()
{
Triangle t = input_triangle();
    find_area(&t);
    output(t);
    return 0;
}
Triangle input_triangle()
{
    Triangle t;
    printf("enter the base:\n");
    scanf("%f",&t.base);
     printf("enter the altitudet:\n");
    scanf("%f",&t.altitude);
    return t;
}
void find_area(Triangle *t)
{
t->area = 0.5 * t->base * t->altitude;
}
void output(Triangle t)
{
    printf("the area of triangle with base = %f and altitude = %f is %f",t.base,t.altitude,t.area);
}