#include<stdio.h>
int main()
{int a,n;
n=0;
for(a=1;a<=100;a++)
{
  if(a%13==0)
  {
  printf("divisible no is :%d\n",a);
  n=n+a;
  
  }
  
  }
  printf("sum of all no. that divisible by 13 is :%d\n",n);
return 0;
}