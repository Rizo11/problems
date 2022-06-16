// https://codeforces.com/problemset/problem/546/A

#include <stdio.h>

int main(void) {
  int k = 0, n = 0, w = 0, sum = 0;
  scanf("%d %d %d", &k, &n, &w);
  sum = k * (w*(w+1)/2);
      
  if(sum - n <= 0)
    printf("0");
  else
    printf("%d", sum - n);
  
  return 0;
}