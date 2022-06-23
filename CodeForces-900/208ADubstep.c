// https://codeforces.com/problemset/problem/208/A

#include <stdio.h>

int main()
{
    char song[200] = {'0'};
    scanf("%s", song);
    for (short i = 0; i < 198; i++)
    {
        if(song[i] != 'W' && song[i+1] != 'U' && song[i+2] != 'B')
        {
            printf("%c", song[i]);
        }
        else
            i += 2;
    }
    
}