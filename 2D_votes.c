#include <stdio.h>
void read(int race[5][4])
{
   int i,j;
   printf("Enter votes pf each person");
    for(i=0;i<5;i++)
 {
  for(j=0;j<4;j++)
  {
     scanf("%d",&race[i][j]);
  }
 }
}
 void display(int race[5][4])
{
   int i,j;

    for(i=0;i<5;i++)
 {
  for(j=0;j<4;j++)
  {
     printf("%d\t",race[i][j]);
  }
  printf("\n");
 }
}
int T_sum( int race[5][4])
{
    int i,j,st;
    st=0;
  for(j=0;j<4;j++)
  {
      for(i=0;i<5;i++)
      {
        st=st+race[i][j];
      }
  }
  printf("\n Sum of total votes=%d",st);

 return st ;
}
  void sum( int race[5][4],int T_sum)
{
    int i,j,s;
    float perc;
    s=0;
  for(j=0;j<4;j++)
  {
      for(i=0;i<5;i++)
      {
        s=s+race[i][j];
      }
      printf("\n Sum of each candidates %d votes=%d",j,s);
  }
    perc=(s+0.1)/T_sum*100;
    printf("\n percentage of each candidate  =%f",perc);

 return ;
}
int main()
{
   int race[5][4];
   read(race);
   display(race);
   T_sum(race);
   printf("\n Sum of total votes=%d",T_sum);
   sum(race,T_sum);
   return 0;
}


