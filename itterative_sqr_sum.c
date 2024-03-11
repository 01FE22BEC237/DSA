#include <stdio.h>
int sqr_sum(int n)
{
  int i=1,num,sum=0;
   while(i<=n)
    {
      printf("Enter num\n");
      scanf("%d",&num);
      sum=sum+(num*num);
      printf("%d",sum);
      i++;
    }
   return sum;
}
int main()
{
 int n,sum;
 printf("Enter n\n");
 scanf("%d",&n);
 sum=sqr_sum(n);
 return 0;
 }
