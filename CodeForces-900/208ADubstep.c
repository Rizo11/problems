// https://codeforces.com/problemset/problem/208/A

#include <stdio.h>

int main()
{
    char song[202] = {'0'};
    short isSpace = 0, length = 0;
    char a;
    scanf("%c", &a);
    while(a != '\n')
    {
        song[length] = a;
        length++;
        scanf("%c", &a);
    }
    for (short i = 0; i < length; i++)
    {
        if(!(song[i] == 'W' && song[i+1] == 'U' && song[i+2] == 'B'))
        {
            if (isSpace)
            {
                printf(" ");
                isSpace = 0;
            }
            printf("%c", song[i]);
        }
        else
        {
            isSpace = 1;
            i += 2;
        }
    }
}

// WUBUUA