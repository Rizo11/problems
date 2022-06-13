// https://codeforces.com/problemset/problem/281/A

#include <stdio.h>
#include <ctype.h>

int main(void) {
  int alphabet[26] = {0};
  char c = 'a';
  scanf("%c", &c);
  printf("%c", toupper(c));
  while(c != '\n')
    {
      scanf("%c", &c);
      printf("%c", c);
    }
  return 0;
}