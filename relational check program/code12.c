 //Check if digit 1 is greater than or equal to digit 0

#include <stdio.h>
int main() {
    int num, d0, d1;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    d0 = num / 10;   // Tens digit
    d1 = num % 10;   // Ones digit
    if(d1 >= d0) {
        printf("1");
    } else {
        printf("0");
    }
    return 0;
}
