//https://codeforces.com/problemset/problem/4/A

#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    if (n%2 == 0 && n > 2)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO");
    }
    
}