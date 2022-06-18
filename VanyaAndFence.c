// https://codeforces.com/problemset/problem/677/A

#include <stdio.h>

int main()
{
    short n = 0, h = 0, ai = 0, width = 0;
    scanf("%hi %hi", &n, &h);
    while (n--)
    {
        scanf("%hi", &ai);
        width += ai > h ? 2 : 1;
    }
    printf("%hi\n", width);
}