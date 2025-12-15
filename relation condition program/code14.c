// Program: Check if first 2 digits and last 2 digits are the same

#include <stdio.h>

int main() {
    int num;
    int first2, last2;

    printf("Enter a four-digit number: ");
    scanf("%d", &num);

    // Extract last 2 digits
    last2 = num % 100;

    // Extract first 2 digits
    first2 = num / 100;

    // Check if equal
    if (first2 == last2) {
        printf("Success");
    } else {
        printf("Failure");
    }

    return 0;
}
