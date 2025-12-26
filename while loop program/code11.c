#include <stdio.h>

int main() {

    /* Calculate and print the sum of all digits of a number entered by the user */

    int num, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }

    printf("%d\n", sum);

    return 0;
}
