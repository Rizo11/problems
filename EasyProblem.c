#include <stdio.h>
 
int main()
{
    short n = 0;
    scanf("%d", &n);
    while(n--)
    {
        short a = 0;
        scanf("%hi", &a);
        if(a)
        {
            printf("HARD");
            return 0;
        }
    }
    printf("EASY");
    return 0;
}