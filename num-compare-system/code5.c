//Check if the number is less than or equal to 50

#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num <= 50) {
        printf("1");
    } else {
        printf("0");
    }
    return 0;
}
