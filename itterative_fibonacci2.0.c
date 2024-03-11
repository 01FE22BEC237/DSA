#include <stdio.h>
void fib(int n)
{
  int i=1;
  int p_term=-1,s_term=1;
  while(i<=n)
   {
      int c_term;
      c_term=p_term+s_term;
      printf("%d",c_term);
      p_term=s_term;
      s_term=c_term;
      i++;
    }
  return ;
 }
 int main()
 {
  int n;
  printf("Enter n");
  scanf("%d",&n);
  fib(n);
  return 0;
 }
