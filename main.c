#include <stdio.h>

int main()
{
  //ここにコードを書く
  int a;
  int b;
  scanf("%d", &a);
  scanf("%d", &b);

  float c = (float)a*b;

  printf("%.3lf\n", c);

  
  return 0;
}
