//https://codeforces.com/problemset/problem/158/A

#include <stdio.h>
int main()
{
    int n, k, total = 0;
    scanf("%d %d", &n, &k);
    getchar();

    int arr1[k];
    for (int i = 0; i < k; i++)
    {
        scanf("%d", &arr1[i]);
        getchar();

    }
    for (int i = 0; i < n-k; i++)
    {
        int a = 0;
        scanf("%d", &a);
        getchar();
        if (a >= arr1[k-1] && a != 0)
            total++;
    }
    for (int i = 0; i < k; i++)
    {
        if (arr1[i] >= arr1[k-1] && arr1[i] != 0)
            total++;
    }
    printf("%d", total);
    
}