// https://codeforces.com/problemset/problem/467/A

#include <stdio.h>

int main()
{
    short n = 0, pi = 0, qi = 0, availabe = 0;
    scanf("%hd", &n);
    while (n--)
    {
        scanf("%hd %hd", &pi, &qi);
        if (qi > ++pi)
            availabe++;
    }
    printf("%hi\n", availabe);
}