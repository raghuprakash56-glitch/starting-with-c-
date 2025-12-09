// Program: Get a two-digit number and print the reverse of the number

#include <stdio.h>
int main() { 
    int num, tens, ones, reverse;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    tens = num / 10;     // Extract ten's digit
    ones = num % 10;     // Extract one's digit
    reverse = ones * 10 + tens;   // Form reverse number
    printf("Reversed number: %d\n", reverse);
    return 0;
}
