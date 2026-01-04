#include <stdio.h>
#include <string.h>

#define MAX 50

void getnumbers(char num1[], char num2[]) {
    printf("Enter first number (up to 50 digits): ");
    scanf("%s", num1);
    printf("Enter second number (up to 50 digits): ");
    scanf("%s", num2);
}

void multiplynumbers(char num1[], char num2[], int result[]) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);

    // Initialize result array
    for (int i = 0; i < MAX*2; i++)
        result[i] = 0;

    // Multiply each digit
    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int mul = (num1[i]-'0') * (num2[j]-'0');
            int sum = mul + result[i+j+1];

            result[i+j+1] = sum % 10;
            result[i+j] += sum / 10;
        }
    }
}

void print(int result[], int size) {
    int i = 0;
    // Skip leading zeros
    while (i < size && result[i] == 0) i++;

    if (i == size) {
        printf("0\n"); // Result is zero
        return;
    }

    for (; i < size; i++)
        printf("%d", result[i]);
    printf("\n");
}

int main() {
    char number1[MAX+1], number2[MAX+1];
    int result[MAX*2];

    getnumbers(number1, number2);
    multiplynumbers(number1, number2, result);
    print(result, MAX*2);

    return 0;
}
