//Check if first two digits equal last two digits

#include <stdio.h>
int main() {
    int num, first2, last2;
    printf("Enter a four-digit number: ");
    scanf("%d", &num);
    first2 = num / 100;   // Get first two digits
    last2 = num % 100;    // Get last two digits
    if(first2 == last2) {
        printf("1");
    } else {
        printf("0");
    }
    return 0;
}
