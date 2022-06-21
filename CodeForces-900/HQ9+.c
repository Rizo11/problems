#include <stdio.h>
 
int main()
{
    char c;
    scanf("%c", &c);
    while(c != '\n')
    {
        if(c == 'H' || c == 'Q' || c == '9')
        {
            printf("YES");
            return 0;
        }
        scanf("%c", &c);
    }
    printf("NO");
    return 0;
}