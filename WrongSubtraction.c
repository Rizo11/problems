// https://codeforces.com/problemset/problem/977/A

#include <stdio.h>

int main(void) {
  int n = 0, k = 0;
  scanf("%d %d", &n, &k);
  while(k--)
    {
      if(n%10 == 0)
        n /= 10;
      else
        n -= 1;
    }
  printf("%d", n);
  return 0;
}