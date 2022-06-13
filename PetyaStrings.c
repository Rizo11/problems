//https://codeforces.com/problemset/status?my=on

#include <stdio.h>

int main()
{
    char l;
    int str1[100], i = 0;
    scanf("%c", &l);\
    while (l != '\n')
    {
        str1[i++] =  l >= 'a' ? l-32 : l;
        scanf("%c", &l);
    }
    for(int j = 0; j < i; j++)
    {
        scanf("%c", &l);
        if(str1[j] > (l >= 'a' ? l-32 : l))
        {
            printf("1");
            return 0;
        }
        else if(str1[j] < (l >= 'a' ? l-32 : l))
        {
            printf("-1");
            return 0;
        }
    }
    printf("0");
    return 0;
}