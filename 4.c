#include <stdio.h>

void main()
{
    int a,b,i;
    printf("how many numbers you wanna see?\n");
    scanf("%d",&a);
    for( i=1;i<=a;i++)
    {
        printf("%d ",i);
    }
}