//Get a two-digit number and print the ten’s digit

#include <stdio.h>
int main() {
    int num, tens;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    tens = num / 10;   // Extracting the ten's digit
    printf("Ten's digit: %d\n", tens);
    return 0;
}

