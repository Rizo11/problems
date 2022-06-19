// https://codeforces.com/problemset/problem/136/A

#include <stdio.h>

int main()
{
    short n = 0, giver[100] = {0};
    scanf("%hd", &n);
    for(int i = 1; i <= n; i++)
    {
        short index = 0;
        scanf("%d", &index);
        giver[index] = i;
    }
    for(int i = 1; i <= n; i++)
        printf("%d ", giver[i]);
}