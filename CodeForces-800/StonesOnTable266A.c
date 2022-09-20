#include <stdio.h>

int main()
{
    char stones[50] = {'0'};
    int nStones = 0, taken = 0;
    scanf("%d", &nStones);
    scanf("%s", stones);

    for (size_t i = 0; i < nStones; i++)
    {
        if(stones[i] == stones[i+1])
        {
            taken++;
        }
    }

    printf("%d", taken);
    
}