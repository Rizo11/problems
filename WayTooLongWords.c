#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d\n", &n);
    while (n--)
    {
        char word[10];
        char e1;
        char e;
        int count = 0;
        scanf("%c", &e);
        while(e != '\n')
        {
            if(count <= 10)
            {
                word[count] = e;
            }
            count += 1;
            e1 = e;
            scanf("%c", &e);
        }

        if(count <= 10)
        {
            for(int i = 0; i < count; i++)
            {
                printf("%c", word[i]);
            }
            printf("\n");
        }
        else
        {
            printf("%c%d%c\n", word[0],count-2,e1);
        }
    }
    
}