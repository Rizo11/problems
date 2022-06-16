// https://codeforces.com/problemset/problem/617/A

#include <stdio.h>

int main(void) {
  int d = 0, total = 0;
  scanf("%d", &d);
  total += d/5 + (d%5)/4 + ((d%5)%4)/3 + (((d%5)%4)%3)/2 + ((((d%5)%4)%3)%2);
  printf("%d", total);
  
  return 0;
}