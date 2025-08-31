#include <stdio.h>

void main()
{
    int i,a,b,c;
    printf("how many numbers you have?\n");
    scanf("%d",&a);
    printf("type those numbers you want sum of :\n");

    for(i=0;i<a;++i)
    {
        scanf("%d",&b);
        c+=b;
        
    }
    printf("%d",c);
}