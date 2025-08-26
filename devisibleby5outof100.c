#include<stdio.h>
int main()
{
 int a,b,c;
 printf("numbers that devisible by 5 :\n ");
 for(a=1;a<=100;a++)
 {
  if(a%5==0)
  { 
   printf("%d\n",a);
  }
 
 }
 return 0;
 }