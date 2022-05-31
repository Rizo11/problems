#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n = 3, total = 0;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        size_t a = 0, b = 0, c = 0;
        scanf("%d %d %d", &a, &b, &c);
        getchar();
        total += (a+b+c >= 2) ? 1 : 0;
    }
    printf("%d\n", total);
    
}