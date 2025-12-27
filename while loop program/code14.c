 /* Check and print whether a number entered by the user is prime or not */
#include <stdio.h>
int main() {
    int num, i = 2, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        flag = 1;
    }

    while (i <= num / 2) {
        if (num % i == 0) {
            flag = 1;
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

