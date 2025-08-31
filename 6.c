#include <stdio.h>

void main()
{   
    int a;
    printf("how many even numbers you wanna see?\n");
    scanf("%d",&a);
    int b = a*2;
    for(int i=2;i<=b;i+=2)
    {
        printf("%d ",i);
    }
}