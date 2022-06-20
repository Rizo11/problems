// https://codeforces.com/problemset/problem/110/A


#include <stdio.h>
 
int main(void) {
  char c = 'a';
  short counter = 0;
  scanf("%c", &c);
  while(c != '\n')
    {
      if(c == '4' || c == '7')
        counter++;
      scanf("%c", &c);
    }
  if(counter == 4 || counter == 7)
    printf("YES");
  else
    printf("NO");
  return 0;
}