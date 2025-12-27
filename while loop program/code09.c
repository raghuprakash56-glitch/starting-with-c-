 /* Print two-digit odd numbers whose tens digit is 7 */
#include <stdio.h>
int main() {
    int num = 70;

    while (num < 80) {

        if (num % 2 != 0) {
            printf("%d\n", num);
        }

        num++;
    }

    return 0;
}

