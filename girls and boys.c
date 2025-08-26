#include <stdio.h>

int main()
 {
    int i, n = 50;
    char sex;
    int boys = 0, girls = 0;

    printf("Enter sex code for 50 students (B for Boy, G for Girl):\n");

    for(i = 1; i <= n; i++)
     {
        scanf(" %c", &sex);  // note the space before %c to avoid newline issues

        if(sex == 'B' || sex == 'b')
            {boys++;}
        else if(sex == 'G' || sex == 'g')
            {girls++;}
        else
           { printf("Invalid input for student %d\n", i);}
    }

    printf("Total Boys = %d\n", boys);
    printf("Total Girls = %d\n", girls);

    return 0;
}