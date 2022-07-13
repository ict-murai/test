#include <stdio.h>

int main(void)
{
  int n;

  printf("n = ");
  scanf("%d", &n);

  if( (n & 1) == 0){　　　　　　　/*==&よりも1==0が優先されるから.*/
    printf("%d は偶数です\n", n);　
  }
  return 0;
}
