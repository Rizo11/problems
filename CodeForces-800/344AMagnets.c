#include <stdio.h>
#include <string.h>

int main()
{
    int n = 0, grs = 1, prev = 0, curr = 0;
    scanf("%d", &n);
    scanf("%d", &prev);
    n--;
    while (n--)
    {
        scanf("%d", &curr);
        if (curr != prev)
            grs++;
        prev = curr;
    }
    printf("%d", grs);
}