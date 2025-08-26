#include <stdio.h>

int main() {
    int i, n = 100;
    float num, smallest, largest;

    printf("Enter 100 numbers:\n");

    // take first number as initial smallest & largest
    scanf("%f", &num);
    smallest = num;
    largest = num;

    // check remaining 99 numbers
    for(i = 2; i <= n; i++) {
        scanf("%f", &num);

        if(num < smallest)
            smallest = num;

       else if(num > largest)
            largest = num;
    }

    printf("Smallest number = %.2f\n", smallest);
    printf("Largest number = %.2f\n", largest);

    return 0;
}