#include <stdio.h>

int main() {

    /* Check and print whether a number entered by the user is prime or not */

    int num, i = 2, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        flag = 1; // Numbers less than or equal to 1 are not prime
    }

    while (i <= num / 2) {
        if (num % i == 0) {
            flag = 1; // Found a divisor, not prime
            break;
        }
        i++;
    }

    if (flag == 0)
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}
