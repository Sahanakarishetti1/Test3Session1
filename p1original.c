#include<stdio.h>
void input(int *num1,int *den1,int *num2,int *den2)
{
  printf("enter two fractions");
  scanf("%d%d%d%d",num1,den1,num2,den2);
  
}
int gcd(int den1, int den2) 
{
   if (den1 == 0)
      return den2;
   return gcd(den2%den1, den1);
}



void add(int num1,int den1,int num2,int den2,int num3,int den3)
{
  den3 = gcd(den1,den2);
  
  num3 = (num1)*(den3/den1) + (num2)*(den3/den2);
  
}
void smallest(int *den3, int *num3) 
{
   
   int common_factor = gcd(*num3,*den3);
   *den3 = *den3/common_factor;
   *num3 = *num3/common_factor;
  smallest(den3,num3);
  }

void output(int num1,int den1,int num2,int den2,int num3,int den3)
  {
    printf("%d/%d+%d/%d=%d/%d",num1,den1,num2,den2,num3,den3);
  }
  int main()
  {
    int num1,den1,num2,den2,num3,den3;
    input(&num1,&den1,&num2,&den2);
    
    gcd(den1,den2);
    
   
    add(num1,den1,num2,den2,num3,den3);
    smallest(&den3,&num3);
    output(num1,den1,num2,den2,num3,den3);
    return 0;
  }

