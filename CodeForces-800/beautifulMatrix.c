//https://codeforces.com/problemset/problem/263/A

#include <stdio.h>

int main()
{
    int res = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int a = 0;
            scanf("%d", &a);
            getchar();
            if(a == 1)
                res = (i > 2 ? i-2 : 2-i) + (j > 2 ? j-2 : 2-j);
        }
        
    }
    printf("%d\n", res);
    
}