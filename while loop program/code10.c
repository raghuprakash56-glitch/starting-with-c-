#include <stdio.h>

int main() {

    /* Count and print the total number of digits in a number entered by the user */

    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        num = num / 10;
        count++;
    }

    printf("%d\n", count);

    return 0;
}
