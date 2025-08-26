#include <stdio.h>

int main() {
    int i, n = 200;
    int num;
    int positive = 0, negative = 0, zeros = 0;

    printf("Enter 200 numbers:\n");

    for(i = 1; i <= n; i++) {
        scanf("%d", &num);

        if(num > 0)
        {
            positive++;
         }   
        else if(num < 0)
        {
            negative++;
         }   
        else{
            zeros++;
            }
    }

    printf("Total Positive numbers = %d\n", positive);
    printf("Total Negative numbers = %d\n", negative);
    printf("Total Zeros = %d\n", zeros);

    return 0;
}