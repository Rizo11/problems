//https://codeforces.com/problemset/problem/282/A

#include <stdio.h>
int main(void) {
  int t = 0;
  int res = 0;
  scanf("%d", &t);
  getchar();
  for(int i = 0; i < t; i++)
    {
      char s;
      scanf("%c", &s);
      if(s == '+')
        res += 1;
      else if (s == '-')
        res--;
      else
      {
        scanf("%c", &s);
        if(s == '+')
          res++;
        else if (s == '-')
          res--;
        getchar();
        getchar();
        continue;
      }
      getchar();
      getchar();
      getchar();
    }
  printf("%d", res);
}