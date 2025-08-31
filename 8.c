#include <stdio.h>

void main()
{
    int a,b,c=0,d,i;
    printf("how many odd numbers do you have?\n");
    scanf("%d",&a);
    b=a*2;

    for(i=1;i<b;i+=2)
    {
        c+=i;
    }
    printf("%d",c);
}