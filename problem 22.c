#include<stdio.h>
int main()
{   int a=0,n;
    printf("enter no:\n");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        a++;
    }
    printf("%d",a);
    return 0;
}
