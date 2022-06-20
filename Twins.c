// https://codeforces.com/problemset/problem/160/A

#include <stdio.h>
 
int main()
{
  int n = 0, coin = 0, coins[101] = {0}, sum = 0, mySum = 0, myCoins = 0, halfSum = 0;
  scanf("%d", &n);
  if(n == 1)
  {
    printf("1");
    return  0;
  }
  int n1 = 100;
  while(n--)
  {
    scanf("%d", &coin);
    coins[coin] += 1;
    sum += coin;
  }
  while(mySum <= sum/2 && n1)
  {
    while(coins[n1] > 0 && (sum/2 >= mySum))
    {
      mySum += n1;
      myCoins++;
      coins[n1] -= 1;
    }
    n1--;
  }
  printf("%d", myCoins);
  return 0;
}