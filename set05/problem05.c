//Write a program to find borga(x) given x.
#include <stdio.h>
#include <math.h>
int input();
int factorial(int n);
float borga_x(int x);
void output(int x, float result);
int main()
{
    int x = input();
    float result = borga_x(x);
    output(x, result);
    return 0;
}
int input()
{
    int x;
    printf("Enter the value of x: \n");
    scanf("%d", &x);
    return x;
}
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
float borga_x(int x)
{
    float result = 1.0;
    float term = 1.0;
    int i = 1;
    while (fabs(term) > 0.000001)
    {
        term = pow(-1, i) * pow(x, 2 * i) / factorial(2 * i);
        result = result + term;
        i++;
    }

    return result;
}
void output(int x, float result)
{
    printf("borga(%d) = %f\n", x, result);
}
