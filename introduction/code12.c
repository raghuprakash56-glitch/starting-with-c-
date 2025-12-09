 //  Get a three-digit number and print the sum of the digits

 #include <stdio.h>
int main() {
    int num, hundreds, tens, ones, sum;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    hundreds = num / 100;          // Extract hundred's digit
    tens = (num / 10) % 10;        // Extract ten's digit
    ones = num % 10;               // Extract one's digit
    sum = hundreds + tens + ones;  // Sum of digits
    printf("Sum of digits: %d\n", sum);
    return 0;
}