//Write a program to find GCD _(HCF)_ of two numbers.
#include <stdio.h>
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);
int main()
{
int num1,num2;
num1=input();
num2=input();
int gcd=find_gcd(num1,num2);
output(num1,num2,gcd);
return 0;
}
int input()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    return num;
}
int find_gcd(int a, int b)
{
    while(a!=b)
    {
        if(a>b) {
            a=a-b;
        }
        else {
            b=b-a;
        }
    }
    return a;
}
void output(int a, int b, int gcd)
{
    printf("%d",gcd);
}