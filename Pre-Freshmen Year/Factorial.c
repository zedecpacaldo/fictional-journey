#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num;
  int fact = 1;
  int i = 1;

  printf("Number for Factorial: ");
  scanf("%d", &num);

  for(i=1; i <=num; i++)
  {
    fact *= i;
  }

  printf("%d", fact);
  return 0;
}
