// https://codeforces.com/problemset/problem/271/A

#include <stdio.h>

_Bool isBeautifulYear(int year)
{
    _Bool nums[10] = {0};
    if(!nums[year%10])
        nums[year%10] = 1;
    if(!nums[(year/10)%10])
        nums[(year/10)%10] = 1;
    else
        return 0;
    if(!nums[(year/100)%10])
        nums[(year/100)%10] = 1;
    else
        return 0;
    if(!nums[(year/1000)%10])
        nums[(year/1000)%10] = 1;
    else
        return 0;
    return 1;
}

int main()
{
    short year = 0;
    scanf("%d", &year);
    short newYear = year;
    _Bool isBeautiful = 0;
    while (!isBeautiful)
    {
        newYear++;
        isBeautiful = isBeautifulYear(newYear);
    }
    printf("%d\n", newYear);
}