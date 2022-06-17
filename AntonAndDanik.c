// https://codeforces.com/problemset/problem/734/A

#include <stdio.h>

int main()
{
    int n = 0, score = 0;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        char g;
        scanf("%c", &g);
        if (g == 'A')
        {
            score++;
        }
        else if(g == 'D')
            score--;
        
    }
    if(score > 0)
        printf("Anton");
    else if(score < 0)
        printf("Danik");
    else
        printf("Friendship");
    
}