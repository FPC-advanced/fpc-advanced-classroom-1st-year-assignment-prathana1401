//Write a program to count the number of words in a string using strtok (_string.h_)
#include <stdio.h>
#include <string.h>
void input_string(char *a);
int count_words(char *string);
void output(char *string, int no_words);

int main() {
    char input[1000];
    input_string(input); 
    int no_words=count_words(input);
    output(input,no_words);
    return 0;
}
void input_string(char *a) {
    printf("Enter a string:\n ");
    fgets(a, 1000, stdin);
    if (a[strlen(a) - 1] == '\n') {
        a[strlen(a) - 1] = '\0';
    }
}
int count_words(char *string) {
    char copy[1000];
    strcpy(copy, string);
    char *token;
    int count = 0;
    token = strtok(copy, " ");
    while (token != NULL) {
        count++;
        token = strtok(NULL, " ");
    }
    return count;
}

void output(char *string, int no_words) {
    printf("The number of words in \"%s\" is %d\n", string, no_words);
}
