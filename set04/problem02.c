//Write a program to find the smallest of three fractions
#include <stdio.h>
typedef struct {
    int num, den;
} Fraction;
void input(Fraction *frac1, Fraction *frac2, Fraction *frac3);
Fraction find_smallest(Fraction frac1, Fraction frac2, Fraction frac3);
void output(Fraction smallest);
int main()
{
Fraction frac1,frac2,frac3;
input(&frac1,&frac2,&frac3);
output(smallest);
return 0;
}
void input(Fraction *frac1, Fraction *frac2, Fraction *frac3)
{
    printf("enter the first fraction(numerator and denominator):\n");
    scanf("%d %d",&frac1->num, &frac1->den);
     printf("enter the second fraction(numerator and denominator):\n");
    scanf("%d %d",&frac2->num, &frac2->den);
     printf("enter the third fraction(numerator and denominator):\n");
    scanf("%d %d",&frac3->num, &frac3->den);
}
Fraction find_smallest(Fraction frac1, Fraction frac2, Fraction frac3)
{
    Fraction smallest = frac1;
    if ((frac2.num * smallest.den) < (smallest.num * frac2.den))
        smallest = frac2;
    if ((frac3.num * smallest.den) < (smallest.num * frac3.den))
        smallest = frac3;
    return smallest;
}
void output(Fraction smallest) {
    printf("The smallest of %d/%d, %d/%d, and %d/%d is %d/%d\n", frac1.num, frac1.den, frac2.num, frac2.den, frac3.num, frac3.den,
           smallest.num, smallest.den);
}