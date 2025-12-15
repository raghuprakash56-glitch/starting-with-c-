#include <stdio.h>

int main() {
    // Program to Check if the Number is Greater Than 50
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 50) {
        printf("Success\n");
    } else {
        printf("Failure\n");
    }

    return 0;
}
