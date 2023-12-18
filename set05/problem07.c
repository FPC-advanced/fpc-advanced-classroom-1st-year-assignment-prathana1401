//Write a program to find out if the name of the camel is a nice name.
#include <stdio.h>
void input(char *name);
int has_nice_name(char *c);
void output(int res);

int main()
{
    char name[100];
    input(name);
    int res= has_nice_name(name);
    output(res);
    return 0;
}
void input(char *name)
{
    printf("Enter the camel name : \n");
    scanf("%s",name);
}
int has_nice_name(char *name)
{
    int j,v=0,c=0;
    for(j=0;name[j]!='\0';j++);
    for(int i=0;i<j;i++)
    {
        if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u' || name[i]=='A' || name[i]=='E' || name[i]=='O' || name[i]=='U')
        {
            v++;
        }
        else
        {
            c++;
        }
    }
    if(v>=2 && c>=2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void output(int res)
{
    if(res==1)
    {
        printf("The camel has a nice name \n");
    }
    else
    {
        printf("The camel does not have a nice name");
    }
}