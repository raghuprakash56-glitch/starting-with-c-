#include <stdio.h>

int main() {

    /* Reverse and print all digits of a number entered by the user */

    int num, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }

    printf("%d\n", rev);

    return 0;
}
