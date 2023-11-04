/*finding primes in given range using sieve of eratosthenes algorithm in C89 standard*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TRUE 0
#define FALSE 1

void sieve(int n)
{
int arr[n+1];
int i, a;
for(i=2; i<=n; i++)
{
    arr[i]=0;
}
for(i=2; i<=n; i++)
    if(arr[i]==0)
    {
        for(a=i*i; a<=n; a+=i)
        arr[a]=1;
    }
for(i=2; i<=n; i++)
{
 if(arr[i]==0){
 printf("%d\n", i);
 }
}
}

int main()
{
int n;
printf("Set an upper bound:\n");
scanf("%d",&n);
if(n>=2)
{
    printf("Prime numbers within this range:\n");
    sieve(n);
}
else
{
    printf("This number is too small, use a number 2 or bigger.\n");
}
return 0;
}
