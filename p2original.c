#include<stdio.h>
struct _fraction
{
  float num,den;
};  
typedef   struct _fraction Fraction;
Fraction input_fraction()
{
  Fraction p;
  printf("enter the num and den of fraction");
  scanf("%f %f",&p.num,&p.den);
  return p;
}
Fraction Largest_fraction(Fraction p1,Fraction p2,Fraction p3,Fraction large)
{
  if(p1.num/p1.den>p2.num/p2.den)
  {
    if(p1.num/p1.den>p3.num/p3.den)
    {
    large=p1;
    }
    else
    {
      large=p3;
    }
  }
  else
  {
    if(p2.num/p2.den>p3.num/p3.den)
    {
      large=p2;
    }
    else{
      large=p3;
    }
  }
}
void output(Fraction p1,Fraction p2,Fraction p3,Fraction large)
{
  printf("the large no is %f/%f",large.num,large.den);
}
int main()
{
  Fraction p1,p2,p3,large;
  p1=input_fraction();
  p2=input_fraction();
  p3=input_fraction();
  large=Largest_fraction(p1,p2,p3,large);
  output(p1,p2,p3,large);
  return 0;
  }