#include<stdio.h>
int main()
{
    printf("enter two numbers");
    int a,b;
    scanf(" %d %d",&a,&b);
    if(a>b)
    {
        printf("number a is largest value \n number b is smallest value");
    }
    else
    {
        printf("number b is largest value \n number a is smallest value");
    }
    return 0;
}
