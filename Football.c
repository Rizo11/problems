// https://codeforces.com/problemset/problem/96/A

#include <stdio.h>
 
int main()
{
    char c;
    scanf("%c", &c);
    short isA = 0, isB = 0;
    while(c != '\n')
    {
        if(c == '1')
        {
            isA++;
            isB = 0;
            if(isA == 7)
            {
                printf("YES");
                return 0;
            }
        }
        else
        {
            isA = 0;
            isB++;
            if(isB == 7)
            {
                printf("YES");
                return 0;
            }
        }
        scanf("%c", &c);
    }
    printf("NO");
    return 0;
}