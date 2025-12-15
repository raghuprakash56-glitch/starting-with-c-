#include <stdio.h>

int main() {
    // Program to Check if the Number is NOT Equal to 50
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num != 50) {
        printf("Success\n");
    } else {
        printf("Failure\n");
    }

    return 0;
}
