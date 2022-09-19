#include <stdio.h>

int main()
{
    unsigned long long n = 0;
    scanf("%lli", &n);

    if(n%2 == 0)
    {
        printf("%lli", n/2);
    }
    else
    {
        printf("-%lli", (n+1)/2);
    }
}