 //  Divide a number by 8 and print the remainde
#include <stdio.h>
int main() {
    int num, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    rem = num % 8;
    printf("Remainder when divided by 8: %d\n", rem);
    return 0;
}

