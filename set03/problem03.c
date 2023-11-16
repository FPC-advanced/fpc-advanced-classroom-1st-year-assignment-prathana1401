//Write a program to check if the given number is prime
#include <stdio.h>
int input_number();
int is_prime(int num);
void output(int num, int result);
int main()
{
    int num=input_number();
int result=is_prime(num);
output(num,result);
    return 0;
}
int input_number()
{
    int num;
    printf("enter the number:\n");
    scanf("%d",&num);
    return num;
}
int is_prime(int num)
{
       if (num <= 1) {
        return 0; 
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}
void output(int num, int result)
{
 if (result) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n",num);
    }   
}

