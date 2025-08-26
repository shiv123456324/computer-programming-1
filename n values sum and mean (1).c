#include <stdio.h>

int main() {
    int i, n ;       
    float num, sum = 0, mean;
    printf("insert number of values that you had to make sum and mean of them:\n");
    scanf("%d",&n);
    printf("enter %d no. for the sum and mean:\n",n);

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