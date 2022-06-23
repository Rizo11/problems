// https://codeforces.com/problemset/problem/405/A

#include <stdio.h>

int main()
{
    short n = 0, nums[101] = {0}, n2 = 0;
    scanf("%hd", &n);
    n2 = n;
    while (n--)
    {
        short ai = 0;
        scanf("%hd", &ai);
        nums[ai]++;
    }
    for (short i = 0; i <= 100; i++)
    {
        while (nums[i]--)
            printf("%hd ", i);
    }
    
}