//Write a program to find all the prime numbers between 2 to n Eratosthenes Sieve method.
#include <stdio.h>
int input_array_size();
void init_array(int n, int a[n]);
void erotosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);
int main()
{
int n=input_array_size();
int a[n];
init_array(n,a);
erotosthenes_sieve(n,a);
output(n,a);
return 0;
}
int input_array_size()
{
    int n;
    printf("enter the limit of n:");
    scanf("%d",&n);
    return n;
}
void init_array(int n, int a[n])
{
for(int i=2;i<=n;i++)
{
a[i]=1;
}
}
void erotosthenes_sieve(int n, int a[n])
{
    for(int p=2;p*p<=n;p++){
        if(a[p]==1)
        {
            for(int i=p*p;i<=n;i=i+p){
                a[i]=0;
            }
        }
    }
}
void output(int n, int a[n])
{
    printf("the prime number between 2 and %d are:",n);
    for(int i=2;i<=n;i++)
    {
        if(a[i]==1)
        {
            printf("%d ",i);
        }
    }
      printf("\n");
}