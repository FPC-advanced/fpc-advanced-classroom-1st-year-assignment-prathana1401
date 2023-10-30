//  Write a program to find if a triangle is scalene.
#include <stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);
int main()
{
int a,b,c;
a=input_side();
b=input_side();
c=input_side();
int isscalene = check_scalene(a, b, c);
output(a,b,c,isscalene);
return 0;
}
int input_side()
{
    int side;
    printf("enter the side:\n");
    scanf("%d",side);
    return side;
}
int check_scalene(int a, int b, int c)
{
if(a != b && b !=c && a !=c)
{return 1;
}
return 0;
}
void output(int a, int b, int c, int isscalene)
{
    printf("Side 1: %d\n", a);
    printf("Side 2: %d\n", b);
    printf("Side 3: %d\n", c);

    if (isscalene) {
        printf("It is a scalene triangle.\n");
    } else {
        printf("It is not a scalene triangle.\n");
    }
}