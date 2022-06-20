// https://codeforces.com/problemset/problem/41/A

#include <stdio.h>

int main()
{
    short size = 0;
    char word[100];
    char c;
    scanf("%c", &c);
    while (c != '\n')
    {
        word[size] = c;
        size++;
        scanf("%c", &c);
    }
    while (size)
    {
        scanf("%c", &c);
        if(word[--size] != c)
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    
    
}