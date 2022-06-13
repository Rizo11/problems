// https://codeforces.com/problemset/problem/339/A

#include <stdio.h>

int main()
{
    int nums[3] = {0};
    char c = 'a';
    while (c != '\n')
    {
        scanf("%c", &c);
        nums[c - 49] += 1;
        c = getchar();
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < nums[i]; j++)
        {
            if(j + 1 == nums[i] && i == 2)
            {
                printf("%d", i + 1);
                break;
            }
            if(j + 1 == nums[i] && i == 1 && !nums[i+1])
            {
                printf("%d", i + 1);
                break;
            }
            if(j + 1 == nums[i] && i == 0 && !nums[i+1] && !nums[i+2])
            {
                printf("%d", i + 1);
                break;
            }
            printf("%d+", i + 1);
        }
    }
}