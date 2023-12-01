//Write a program to evaluate a polynomial at a given point using [Horner's Method]
#include <stdio.h>
#include <stdio.h>
int input_degree();
void input_coefficients(int n, float a[n]);
float input_x();
float evaluate_polynomial(int n, float a[n], float x);
void output(int n, float a[n], float x, float result);
int main() {
    int n = input_degree();
    float coefficients[n];
    input_coefficients(n, coefficients);
    float x = input_x();
    float result = evaluate_polynomial(n, coefficients, x);
    output(n, coefficients, x, result);
    return 0;
}
int input_degree() {
    int n;
    printf("Enter the degree of the polynomial: ");
    scanf("%d", &n);
    return n;
}
void input_coefficients(int n, float a[n]) {
    printf("Enter the coefficients of the polynomial (from highest degree to constant term):\n");
    for (int i = n; i >= 0; --i) {
        scanf("%f", &a[i]);
    }
}
float input_x() {
    float x;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    return x;
}
float evaluate_polynomial(int n, float a[n], float x) {
    float result = a[0]; 
    for (int i = 1; i <= n; ++i) {
        result = result * x + a[i];
    }
    return result;
}
void output(int n, float a[n], float x, float result) {
    printf("H(%d, %.2f, %.2f) = ", n, x, x);
    
    for (int i = 0; i <= n; ++i) {
        if (i == 0) {
            printf("%.2f", a[i]);
        } else {
            printf(" + %.2f * %.2f^%d", a[i], x, i);
        }
    }
    printf(" = %.7f\n", result);
}