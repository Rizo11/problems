#include <stdio.h>

int main()
{
    long long n = 0;
    scanf("%d", &n);
    printf("%d\n", fib(n));
}

long fib(int n)
{
    if(n)
    return n*fib(n--);
}