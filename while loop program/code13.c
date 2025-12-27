  /* Get a number from user. 
       If the last digit is even, print the number as it is.
       If the last digit is odd, subtract 1 from the last digit and print the number.
    */

#include <stdio.h>
int main() {
    int num, last_digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    last_digit = num % 10; 
    if (last_digit % 2 != 0) {
        num = num - 1;          
    }

    printf("%d\n", num);

    return 0;
}

