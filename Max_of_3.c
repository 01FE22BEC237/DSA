/*Compute max of three numbers*/
#include <stdio.h>
int main ()
{
  int x1,x2,x3;
  printf("Enter x1,x2,x3");
  scanf("%d%d%d",&x1,&x2,&x3);
  if(x1>x2&&x1>x3)
   printf("x1 is max");
  else if(x2>x1&&x2>x3)
   printf("x2 is max");
  else if(x3>x1&&x3>x2)
   printf("x3 is max");
  return 0;
}
