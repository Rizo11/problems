// https://codeforces.com/problemset/problem/451/A

#include <stdio.h>

int main()
{
    short n = 0, m = 0;
    scanf("%hd %hd", &n, &m);
    if((n*m)%2 == 0)
        printf("Malvika");
    else
        printf("Akshat");
}