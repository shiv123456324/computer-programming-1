#include<stdio.h>
int main()
{
    printf("enter two numbers");
    int a,b;
    scanf(" %d %d",&a,&b);
    if(a>b)
    {
        printf("number a is largest value");
    }
    else
    {
        printf("number b is largest value");
    }
    return 0;
}
