// https://codeforces.com/problemset/problem/59/A

#include <stdio.h>
#include <ctype.h>

int main(void) {
  char s = '\0';
  char word[100] = {0};
  short u = 0, l = 0;
  scanf("%c", &s);
  while(s != '\n')
  {
    word[l+u] = s;
    s >= 97 ? l++ : u++;
    scanf("%c", &s);
  }
  if(u > l)
  {
    for(int i = 0; i < l+u; i++)
      {
        printf("%c", toupper(word[i]));
      }
  }
  else
  {
    for(int i = 0; i < l+u; i++)
      {
        printf("%c", tolower(word[i]));
      }
  }
  
  return 0;
}