// https://codeforces.com/problemset/problem/451/A

#include <stdio.h>

int main()
{
    short n = 0, m = 0, i = 0;
    scanf("%hd %hd", &n, &m);
    if (n > m)
        i = m;
    else
        i = n;
    if (i % 2 == 0)
        printf("Malvika");
    else
        printf("Akshat");
}