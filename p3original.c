#include<stdio.h>
int input_n_and_r(int *n,int*r)
{
 printf("enter 2 num\n");
  scanf("%d%d",n,r);
  
}
int ncr(int n,int r)
{
  
  int factorial(int Number)
  {

  if (Number == 0 || Number == 1)
    return 1;
  else
    return Number * factorial (Number -1);
  
  int ncr;
 ncr = factorial(n)/ (factorial(r) * factorial(n - r));
    }
}

void output(int n,int r,int nCr)
{
  printf("%dc%d is %d",n,r,nCr);
}
int main()
{
  int n,r;
  input_n_and_r(&n,&r);
  int nCr;
  nCr=ncr(n,r);
  output(n,r,nCr);
  return 0;
  
}

      
    
  
  
  
 
