#include <stdio.h>

int main() {
    int i, n ;       
    float num, sum = 0, mean;
    n=10;
    printf("enter 10 no. for the sum and mean:\n");

    for(i = 0; i < n; i++)
     {   
        scanf("%f", &num);    
        sum = sum + num;       
     }

    mean = sum / n;  

    printf("Sum= %.2f\n", sum); //%.2f means show only  2 digits after decimal (.)
    printf("Mean = %.2f\n", mean);

    return 0;
}