// https://codeforces.com/problemset/problem/791/A

#include <stdio.h>

int main()
{
    //  3          2
    int Limak = 0, Bob = 0;
    scanf("%d %d", &Limak, &Bob);
    // 3 * Limak - 2 * Bob >= 0
    int year = 0;
    while (Bob - Limak >= 0)
    {
        Limak *= 3;
        Bob *= 2;
        year++;
    }
    printf("%d\n", year);
}