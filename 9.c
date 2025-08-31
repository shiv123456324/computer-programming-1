#include <stdio.h>

void main()
{
    int a,b,c=0,d,i;
    printf("how many even numbers do you have?\n");
    scanf("%d",&a);
    b=a*2;

    for(i=2;i<=b;i+=2)
    {
        c+=i;
    }
    printf("%d",c);
}