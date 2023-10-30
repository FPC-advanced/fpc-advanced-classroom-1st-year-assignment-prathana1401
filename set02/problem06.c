//Write a program to reverse a string.
#include <stdio.h>
#include <string.h>
void input_string(char *a);
void str_reverse(char *str);
void output(char *reverse_a);
int main() {
    char str[100];
    input_string(str);
    str_reverse(str);
    output(str);
    return 0;
}
void input_string(char *a) {
    printf("Enter a string: ");
    scanf("%s", a);
}
void str_reverse(char *str) {
    int len = strlen(str);
    int start = 0;
    int end = len - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
void output(char *reverse_a) 
{
    printf(" %s\n", reverse_a);
}
