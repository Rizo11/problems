// https://codeforces.com/problemset/problem/236/A

#include <stdio.h>

int main(void) {
  int alphabet[26] = {0};
  char c = 'a';
  int sum = 0;
  scanf("%c", &c);
  while(c != '\n')
    {
      if(alphabet[c-97] != 1)
      {
        alphabet[c-97] = 1;
        sum++;
      }
      scanf("%c", &c);
    }
  sum % 2 == 0 ? printf("CHAT WITH HER!") : printf("IGNORE HIM!");
  return 0;
}