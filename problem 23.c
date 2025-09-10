#include<stdio.h>
int main()
{   int a,n;
    printf("enter three digit no:\n");
    scanf("%d",&n);
    for(int i=0;i<3;i++)
    {
        a=n%10;
        printf("%d",a);
        n=n/10;
    }
    return 0;
