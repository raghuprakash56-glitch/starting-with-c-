//Check if digit1 == digit0 AND digit2 != digit3

#include <stdio.h>
int main() {
    int num, d0, d1, d2, d3;
    printf("Enter a four-digit number: ");
    scanf("%d", &num);
    d0 = num / 1000;           // thousands place
    d1 = (num / 100) % 10;     // hundreds place
    d2 = (num / 10) % 10;      // tens place
    d3 = num % 10;             // ones place
    if(d1 == d0 && d2 != d3) {
        printf("1");
    } else {
        printf("0");
    }
    return 0;
}
