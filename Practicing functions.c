#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()

#include<stdlib.h>
#include<stdio.h>

float prompt(char p[]);
float circle(float q);
float triangle(float z, float x);

int main(){

 float radius,base,height,result;

  radius=prompt("Enter Radius");
  result=circle(radius);
  printf("Area of Circle is %.2f\n",result);

  base=prompt("Get base of triangle");
  height=prompt("Gets height of triangle");
  result=triangle(base,height);
  printf("Area of Triangle is %.2f\n",result);
  return 0;
}
float prompt(char p[])
{
    float input;
    printf("%s",p);
    scanf("%f",&input);
    return input;
}
float circle(float q)
{
   float area;
   area=(22/7)*q*q;
   return area;
}
float triangle(float z, float x)
{
   float tri;
   tri=(z*.5)*x;
   return tri;
}


