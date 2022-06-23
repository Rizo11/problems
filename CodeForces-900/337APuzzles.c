// https://codeforces.com/problemset/problem/337/A

#include <stdio.h>

int main()
{
    short n = 0, m = 0, maxIndex = 0, same = 0;
    scanf("%hd %hd", &n, &m);
    short puzzles[m];
    for (short i = 0; i < m; i++)
    {
        scanf("%hd", &puzzles[i]);
    }
    for (short i = 0; i < m; i++)
    {
        short current = puzzles[i];
        for (short j = i; j < m; j++)
        {
            if(current > puzzles[j])
            {
                current = puzzles[j];
                puzzles[j] = puzzles[i];
                puzzles[i] = current;
            }
            else if (current == puzzles[j])
            {
                same++;
            }
            
        }
    }
    short min = 9999;
    for (short i = 0; i < m-n+1; i++)
    {
        min = min > puzzles[i+n-1]-puzzles[i] ? puzzles[i+n-1]-puzzles[i] : min;
    }
    printf("%hd", min);
}