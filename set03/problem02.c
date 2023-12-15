//Write a program to find whether the given 3 points form a triangle
#include <stdio.h>
#include <math.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);
int main()
{
float x1,y1,x2,y2,x3,y3;
input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
int result=is_triangle(x1,y1,x2,y2,x3,y3);
output(x1,y1,x2,y2,x3,y3,result);
return 0;
}
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
    printf("enter the coordinates of the first point:\n");
    scanf("%f %f",x1,y1);
    printf("enter the coordinates of the second point:\n");
    scanf("%f %f",x2,y2);
    printf("enter the coordinates of the third point:\n");
    scanf("%f %f",x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
    float side1,side2,side3;
    side1=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    side2=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
    side3=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    if(side1+side2>side3 && side2+side3>side1 && side1+side3>side2)
    {
        return 1;
    }
    else{
        return 0;
    }
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
    if(result==1)
    {
        printf("The points (%f,%f), (%f,%f) and (%f,%f) form a triangle",x1,y1,x2,y2,x3,y3,result);
    }
    else{
    printf("The points (%f,%f), (%f,%f) and (%f,%f) do not form a triangle",x1,y1,x2,y2,x3,y3,result);
}
}

