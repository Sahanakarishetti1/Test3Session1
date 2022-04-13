#include<stdio.h>
int input_n_and_r(int *n,int*r)
{
 printf("enter 2 num");
  scanf("%d,%d",n,r);
}
int ncr(int n,int r)
{
  
  int fact()
  {
  int n =1,i;
    if(n=0)
    {
      return n;
    }
    else
    {
      for (i = 1; i <= n; i++)
	{
       n=n*i;
	}
    }
    return(n);
int result;
 result =fact(n)/fact(r)*fact(n-r);
    }


    }
void output(int n,int r,int result)
{
  printf("%dc%d is %d",n,r,result);
}
int main()
{
  int n,r;
  input_n_and_r(&n,&r);
  int result;
  result=ncr(n,r);
  output(n,r,result);
  return 0;
  
}

      
    
  
  
  
 
