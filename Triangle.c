/*compute type of triangle*/
#include <stdio.h>
#include<math.h>
int main()
{
  float x1,x2,x3;
  printf("Enter x1,x2,x3");
  scanf("%f%f%f",&x1,&x2,&x3);
  if((x1==x2&&x2==x3&&x1==x3)
     printf("Triangle is equilateral");
  else if((x1==x2)&&( x1!=x3)&&(x2!=x3))
     printf("Triangle is isosceles");
  else if(pow(x3,2)==pow(x1,2)+pow(x2,2))
     printf("Triangle is right angled");
  else if((x1!=x2)&&(x2!=x3))
      printf("Triangle is scalene");
  return 0;
}
