/*program to  find sum of alternate n terms*/
#include <stdio.h>

int find_sum(int n)
{
    int i=1;
    int sum=0;
    int sign=1;
    int cnt=1;
    while(i<=n)
        {
          sum=sum+i*sign;
          sign=sign*(-1);
         i= i+2;
         cnt++;
        }
    return sum;
}
int main()
{
  int n,s;
  printf("Enter n\n");
  scanf("%d",&n);
  s=find_sum(n);
  printf("The sum=%d",s);
  return 0;
}



