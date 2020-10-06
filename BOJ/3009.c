#include <stdio.h>

int main()
{
  int a1,b1,c1;
  int a2,b2,c2;

  scanf("%d %d",&a1, &a2);
  scanf("%d %d",&b1, &b2);
  scanf("%d %d",&c1, &c2);

  int result1, result2;

  if(a1 == b1)result1 = c1;
  else if(a1 == c1)result1 = b1;
  else result1 = a1;

  if(a2 == b2)result2 = c2;
  else if(a2 == c2)result2 = b2;
  else result2 = a2;

  printf("%d %d",result1, result2);
}
