// https://codeforces.com/problemset/problem/116/A

#include <stdio.h>

int main(void) {
  short in = 0, out = 0, s = 0;
  int capacity = 0, maxCap = 0;
  scanf("%hi", &s);

  while(s--)
  {
    scanf("%hi %hi", &out, &in);
    capacity += in-out;
    maxCap = maxCap < capacity ? capacity : maxCap;
  }
  printf("%d", maxCap);
  return 0;
}