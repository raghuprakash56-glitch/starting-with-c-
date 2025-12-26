#include <stdio.h>

int main() {

    /* Print two-digit odd numbers whose sum of digits is 5 */

    int num = 11;
    int sum;

    while (num < 100) {

        if (num % 2 != 0) {
            sum = (num / 10) + (num % 10);

            if (sum == 5) {
                printf("%d\n", num);
            }
        }

        num++;
    }

    return 0;
}
