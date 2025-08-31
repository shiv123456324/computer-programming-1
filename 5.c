#include <stdio.h>

void main()
{   
    int a;
    printf("how many odd numbers you wanna see?\n");
    scanf("%d",&a);
    int b = a*2;
    for(int i=1;i<=b;i+=2)
    {
        printf("%d ",i);
    }
}