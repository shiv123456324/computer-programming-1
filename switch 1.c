#include<stdio.h>
int main()
{
    int a,b,choice,d;

    printf("enter 1 st integers:");
    scanf("%d",&a);
     printf("enter 2 nd integers:");
    scanf("%d",&b);


    printf("enter your choice:   \n");
    printf("1._ addition_    \n");
    printf("2. _subtraction_  \n");
    printf("3. _multiplication_   \n");
    printf("4. _division_   \n");
    scanf("%d",&choice);


    switch(choice)
    {


       case 1:
           d=a+b;
           printf("result=%d",d);
           break;
       case 2:
        d=a-b;
        printf("result=%d",d);
        break;
       case 3:
        d=a*b;
        printf("result=%d",d);
        break;
       case 4:
         if(b!=0)
         {
             d=a/b;
             printf("result=%d",d);
         }
         else
         {
             printf("division by zero is not allowed");
         }
         break;
       default:
        printf("invalid choice.\n");
        break;

    }

        return 0;
}
