 //Get a two-digit number and print the one’s digit

#include <stdio.h>

int main() {
    int num, ones;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    ones = num % 10;   // Extracting one's digit

    printf("One's digit: %d\n", ones);

    return 0;
}

