// https://codeforces.com/problemset/problem/580/A

#include <stdio.h>

int main(void) {
    int n = 0, a1 = 0, a2 = 0, k = 0, maxK = 0;
    scanf("%d", &n);
    scanf("%d", &a1);
    while(--n)
    {
        scanf("%d", &a2);
        if(a2 >= a1)
            k++;
        maxK = k > maxK ? k : maxK;
        if(a2 < a1)
            k = 0;
        a1 = a2;
    }
    printf("%d", ++maxK);
    return 0;
}