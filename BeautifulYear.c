#include <stdio.h>

int main()
{
    short year = 0;
    scanf("%d", &year);
    _Bool nums[10] = {0};
    nums[year%10] = 1;
    // 2016
    nums[(year/10)%10] = 1;
    nums[(year/100)%10] = 1;
    nums[(year/1000)%10] = 1;
    int newNum = 0;
    
}