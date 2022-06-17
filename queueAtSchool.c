// https://codeforces.com/problemset/problem/266/B

#include <stdio.h>

int main()
{
    int n = 0, t = 0;
    scanf("%d %d", &n, &t);
    char queue[n];
    scanf("%s", &queue);
    for (int j = 0; j < t; j++)
    {
        for (int i = 0; i < n-1; i++)
        {
            if(queue[i] == 'B' && queue[i+1] == 'G')
            {
                char temp = queue[i];
                queue[i] = queue[i+1];
                queue[i+1] = temp;
                i++;
            }
        }    
    }
    
    
    printf("%s", queue);
    
}