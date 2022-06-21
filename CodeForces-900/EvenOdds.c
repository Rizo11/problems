// https://codeforces.com/problemset/problem/318/A

#include <stdio.h>
#include <stdint.h>

int main()
{
    int64_t k = 0, n = 0, subN = 0;
    scanf("%I64d %I64d", &n, &k);
    subN = n/2 + (n%2 != 0);
    if(k > subN)    
    {
        printf("%I64d", 2*(k-1-subN) + 2);
    }
    else
    {
        printf("%I64d", 2*(k-1) + 1);
    }
 
    return 0;
}