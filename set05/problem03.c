//Write a program to find the weight of the camel given height, length and stomach radius using four functions *(Structures)*
#include <stdio.h>
#include <math.h>
struct camel {
	float radius, height, length,weight;
};
typedef struct camel Camel;
Camel input();
float find_weight(Camel c); 
void output(Camel c);
int main()
{
    Camel c=input();
    c.weight=find_weight(c);
    output(c);
    return 0;
}
Camel input()
{
    Camel c;
    printf("Enter the radius,height,and length of the camel:\n");
    scanf("%f%f%f",&c.radius,&c.height,&c.length);
    return c;
}
float find_weight(Camel c)
{
    const float pi=3.1415;
    return pi*pow(c.radius,3)*sqrt(c.height*c.length);
}
void output(Camel c)
{
    printf("The weight of the camel with radius: %f,height: %f,length:%f is %f\n",c.radius,c.height,c.length,c.weight);
}