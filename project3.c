#include<stdio.h>
int main()
{


int a,b,c;

    printf("enter first number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d",&b);
    printf("enter third number: ");
    scanf("%d",&c);
    if(a>b && a>c)
    {
     printf("a is greatest\n");
    }
    else
    if(b>a && b>c)
        {
         printf("b is greatest\n");
    }
    else
    { printf("c is greatest\n");
    }
       if(a<b && a<c)
    {
     printf("a is smallest");
    }
    else
    if(b<a && b<c)
        {
         printf("b is smallest");
    }
    else
    { printf("c is smallest");
    }

    return 0;
}
