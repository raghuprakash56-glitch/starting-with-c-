#include <stdio.h>

int main() {

    /* Print the sum of numbers from 1 to 6 using while loop */

    int i = 1;
    int sum = 0;

    while (i <= 6) {
        sum = sum + i;
        i++;
    }

    printf("%d\n", sum);

    return 0;
}
