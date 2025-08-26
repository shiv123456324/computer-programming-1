#include<stdio.h>
int main()
{
int a,b,c;
c=1;
printf("enter no. for the factorial:\n");
scanf("%d",&b);
for(a=1;a<=b;a++)
{ 
c=c*a;
}
printf("factorial that given:%d\n",c);

return 0;

}